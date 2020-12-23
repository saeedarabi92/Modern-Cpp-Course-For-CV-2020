#! /bin/bash
rm -rf build
mkdir build
cd build
cmake ..
make 
make install
cd ..
echo "Running the tests..."
bats tests/test_task_1.sh
