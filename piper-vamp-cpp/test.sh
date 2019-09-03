#!/bin/bash

set -eu

mypath=$(dirname "$0")

echo "Building and testing simple server..."

make -f "$mypath"/Makefile clean all test

echo
echo "Building and running test client..."

( cd "$mypath"/vamp-client/qt && qmake && make clean all test &&
      ./test ../../bin/piper-vamp-simple-server )

echo
echo "Done"
echo
