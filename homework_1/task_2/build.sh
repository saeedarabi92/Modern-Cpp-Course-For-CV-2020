#! /bin/bash
echo "Compiling the two objects needed for building the library..."
c++ -I ./include -c src/subtract.cpp -o build/subtract.o
c++ -I ./include -c src/sum.cpp -o build/sum.o
echo "Done!"
echo "Archiving the two objects and create the library..."
ar cr results/lib/libipb_arithmetic.a build/sum.o build/subtract.o
echo "Done!"
echo "Static linking of the library and building the main program..."
c++ src/main.cpp -lipb_arithmetic -o results/bin/test_ipb_arithmetic -I include -L results/lib
echo "Done!"
echo "Executable can be find in results/bin"