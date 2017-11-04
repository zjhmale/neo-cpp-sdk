#!/bin/bash
set +e
set -x

rm -rf build
mkdir build && cd build
cmake ..
make
if [ ! -f "neo_example" ] ; then
    exit 1
fi
