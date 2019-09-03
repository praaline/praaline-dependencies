#!/bin/bash 

set -eu

mydir=$(dirname "$0")

piperdir="$mydir"/../../piper
vampsdkdir="$mydir"/../../vamp-plugin-sdk
bindir="$mydir"/../bin
schemadir="$piperdir"/json/schema

if [ ! -d "$schemadir" ]; then
    echo "WARNING: schema directory $schemadir not found, won't be validating JSON schema" 1>&2
fi

tmpdir=$(mktemp -d)

if [ ! -d "$tmpdir" ]; then
    echo "Temp directory creation failed" 1>&2
    exit 1
fi

trap "rm -rf $tmpdir" 0

reqfile="$tmpdir/req.json"
respfile="$tmpdir/resp.json"
allrespfile="$tmpdir/resp.all"
input="$tmpdir/input"
expected="$tmpdir/expected"
expected_less_strict="$tmpdir/expected-less-strict"
obtained="$tmpdir/obtained"

fail() {
    local msg="$1"
    echo " !! $msg!" 1>&2
    exit 1
}

validate() {
    local file="$1"
    local schemaname="$2"
    if [ -d "$schemadir" ]; then
	echo " * validating against schema $schemaname... " 1>&2
        jsonschema -i "$file" "$schemadir/$schemaname.json" 1>&2 && \
            echo " -> validated against schema $schemaname" 1>&2 || \
            fail "failed to validate $schemaname"
    else
        echo "(schema directory $schemadir not found, skipping validation)" 1>&2
    fi
}

validate_request() {
    local json="$1"
    echo "$json" > "$reqfile"
    validate "$reqfile" "rpcrequest"
}

validate_response() {
    local json="$1"
    echo "$json" > "$respfile"
    validate "$respfile" "rpcresponse"
}

# NB this list of commands includes a couple that are expected to fail
# (process before configure, configure with nonexistent handle, finish
# same handle twice)
cat > "$input" <<EOF
{"method":"list"}
{"method":"list","params": {"from":["vamp-example-plugins","something-nonexistent"]}}
{"method":"list","params": {"from":["something-nonexistent"]}}
{"method":"load","id":6,"params": {"key":"vamp-example-plugins:percussiononsets","inputSampleRate":44100,"adapterFlags":["AdaptInputDomain","AdaptBufferSize"]}}
{"method":"process","params": {"handle": 1, "processInput": { "timestamp": {"s": 0, "n": 0}, "inputBuffers": [ [1,2,3,4,5,6,7,8] ]}}}
{"method":"configure","id":"weevil","params":{"handle":1,"configuration":{"framing":{"blockSize": 8,"stepSize":8}, "channelCount": 1, "parameterValues": {"sensitivity": 40, "threshold": 3}}}}
{"method":"configure","id":9,"params":{"handle":9999,"configuration":{"framing":{"blockSize": 8,"stepSize":8}, "channelCount": 1, "parameterValues": {"sensitivity": 40, "threshold": 3}}}}
{"method":"process","params": {"handle": 1, "processInput": { "timestamp": {"s": 0, "n": 0}, "inputBuffers": [ [1,2,3,4,5,6,7,8] ]}}}
{"method":"finish","params": {"handle": 1}}
{"method":"finish","id":"blah","params": {"handle": 1}}
EOF

# Expected output, apart from the plugin list which seems a bit
# fragile to check here
cat > "$expected" <<EOF
{"id": 6, "jsonrpc": "2.0", "method": "load", "result": {"defaultConfiguration": {"channelCount": 1, "framing": {"blockSize": 1024, "stepSize": 1024}, "parameterValues": {"sensitivity": 40, "threshold": 3}}, "handle": 1, "staticData": {"basic": {"description": "Detect percussive note onsets by identifying broadband energy rises", "identifier": "percussiononsets", "name": "Simple Percussion Onset Detector"}, "basicOutputInfo": [{"description": "Percussive note onset locations", "identifier": "onsets", "name": "Onsets"}, {"description": "Broadband energy rise detection function", "identifier": "detectionfunction", "name": "Detection Function"}], "category": ["Time", "Onsets"], "inputDomain": "TimeDomain", "key": "vamp-example-plugins:percussiononsets", "maker": "Vamp SDK Example Plugins", "maxChannelCount": 1, "minChannelCount": 1, "parameters": [{"basic": {"description": "Energy rise within a frequency bin necessary to count toward broadband total", "identifier": "threshold", "name": "Energy rise threshold"}, "defaultValue": 3, "extents": {"max": 20, "min": 0}, "unit": "dB", "valueNames": []}, {"basic": {"description": "Sensitivity of peak detector applied to broadband detection function", "identifier": "sensitivity", "name": "Sensitivity"}, "defaultValue": 40, "extents": {"max": 100, "min": 0}, "unit": "%", "valueNames": []}], "programs": [], "rights": "Code copyright 2006 Queen Mary, University of London, after Dan Barry et al 2005.  Freely redistributable (BSD license)", "staticOutputInfo": {"detectionfunction": {"typeURI": "http://purl.org/ontology/af/OnsetDetectionFunction"}, "onsets": {"typeURI": "http://purl.org/ontology/af/Onset"}}, "version": 2}}}
{"error": {"code": 0, "message": "error in process request: plugin has not been configured"}, "jsonrpc": "2.0", "method": "process"}
{"id": "weevil", "jsonrpc": "2.0", "method": "configure", "result": {"framing": {"blockSize": 8, "stepSize": 8}, "handle": 1, "outputList": [{"basic": {"description": "Percussive note onset locations", "identifier": "onsets", "name": "Onsets"}, "configured": {"binCount": 0, "binNames": [], "hasDuration": false, "sampleRate": 44100, "sampleType": "VariableSampleRate", "unit": ""}, "static": {}}, {"basic": {"description": "Broadband energy rise detection function", "identifier": "detectionfunction", "name": "Detection Function"}, "configured": {"binCount": 1, "binNames": [""], "hasDuration": false, "quantizeStep": 1, "sampleRate": 86.1328125, "sampleType": "FixedSampleRate", "unit": ""}, "static": {}}]}}
{"error": {"code": 0, "message": "error in configure request: unknown plugin handle supplied to configure"}, "id": 9, "jsonrpc": "2.0", "method": "configure"}
{"jsonrpc": "2.0", "method": "process", "result": {"features": {}, "handle": 1}}
{"jsonrpc": "2.0", "method": "finish", "result": {"features": {"detectionfunction": [{"featureValues": [0], "timestamp": {"n": 11609977, "s": 0}}]}, "handle": 1}}
{"error": {"code": 0, "message": "error in finish request: unknown plugin handle supplied to finish"}, "id": "blah", "jsonrpc": "2.0", "method": "finish"}
EOF

# We run the whole test three times,
# to cover (de)serialisation of json and capnp requests and responses
# as well as exercising both server modes (json and capnp)
# converting / reading from capnp requests is currently not tested

#debugflag=-d
debugflag=

for request_response_conversion in none json_to_json json_to_capnp ; do # nb json_to_capnp must be last: see comment in else case

    ( export VAMP_PATH="$vampsdkdir"/examples ;
      while read request ; do
          validate_request "$request"
          echo "$request"
      done |
          if [ "$request_response_conversion" = "none" ]; then
              "$bindir"/piper-vamp-simple-server $debugflag json
          elif [ "$request_response_conversion" = "json_to_json" ]; then
              "$bindir"/piper-convert request -i json -o json |
                  "$bindir"/piper-vamp-simple-server $debugflag json |
                  "$bindir"/piper-convert response -i json -o json
          else
              # The capnp output doesn't preserve the method name in error
              # responses, so replace those now that we've done the json tests
              perl -i -p -e 's/(error.*"method": )"[^"]*"/$1"invalid"/' "$expected"
              "$bindir"/piper-convert request -i json -o capnp |
                  "$bindir"/piper-vamp-simple-server $debugflag capnp |
                  "$bindir"/piper-convert response -i capnp -o json
          fi |
          while read response ; do
              echo "$response" >> "$allrespfile"
              validate_response "$response"
          done
    ) < "$input"

    # Skip plugin lists
    tail -n +4 "$allrespfile" > "$obtained"

    echo "Checking response contents against expected contents..."  
    # the expected configuration response is fragile, capnp fills in optional fields,
    # json doesn't - which is fine behaviour, but causes the test to fail - remove empty binCount and binNames
    expected_without_optional_fields=$( cat "$expected" | sed -E 's/\"(binCount|binNames)\": ?((\[\])|0),? ?//g')
    echo "$expected_without_optional_fields" > "$expected_less_strict"

    if cmp "$obtained" "$expected" -s || cmp "$obtained" "$expected_less_strict" -s; then
      echo "OK"
    else
      diff -U 1 "$obtained" "$expected"
    fi

    echo "Checking plugin counts from list responses..."
    
    # Now check the plugin lists, but as the descriptions etc are
    # probably a bit fragile, let's just count the number of plugins

    # First, with no "from" arg to the list call
    list_no_from=$(head -n +1 "$allrespfile" | fmt -1 | grep '"key"' | wc -l | sed 's/[^0-9]//g')

    # Now with a "from" arg that includes the library that exists
    list_with_good_from=$(tail -n +2 "$allrespfile" | head -n +1 | fmt -1 |
                              grep '"key"' | wc -l | sed 's/[^0-9]//g')
    
    # Now with a "from" arg that doesn't include any real library
    list_with_bad_from=$(tail -n +3 "$allrespfile" | head -n +1 | fmt -1 |
                             grep '"key"' | wc -l | sed 's/[^0-9]//g')

    if [ "$list_no_from" != "6" ]; then
        echo "Wrong number of plugins from list response without \"from\" arg"
        echo "Expected 6, obtained $list_no_from"
        false
    fi
    if [ "$list_with_good_from" != "6" ]; then
        echo "Wrong number of plugins from list response with good \"from\" arg"
        echo "Expected 6, obtained $list_with_good_from"
        false
    fi
    if [ "$list_with_bad_from" != "0" ]; then
        echo "Wrong number of plugins from list response with bad \"from\" arg"
        echo "Expected 0, obtained $list_with_bad_from"
        false
    fi
    echo OK
    
    rm "$allrespfile"
done

echo "Tests succeeded"  # set -e at top should ensure we don't get here otherwise
