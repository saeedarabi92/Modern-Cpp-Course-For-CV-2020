#! /bin/bash
rm -rf build
rm app.html
mkdir build
cd build
cmake ..
make install
