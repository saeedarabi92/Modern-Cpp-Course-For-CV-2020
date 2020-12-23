#! /bin/bash
rm -rf build
mkdir build
cd build
cmake ..
make 
make install
cd ..
echo "********************"
echo "********************"
echo "Running the tests..."
echo "********************"
echo "********************"
bats tests/test_task_1.sh
