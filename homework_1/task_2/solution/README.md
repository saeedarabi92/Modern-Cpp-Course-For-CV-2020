### Solution of the Exercise 1 (Build by hand!):

`cd` to homework_1/task_2 and run the following commands to:
1. Compile the two objects needed for building the library:

* `c++ -I ./include -c src/subtract.cpp -o build/subtract.o`
* `c++ -I ./include -c src/sum.cpp -o build/sum.o`

3. Archive the two objects and create the library:

* `ar cr results/lib/libipb_arithmetic.a build/sum.o build/subtract.o`

4. Static linking of the library and building the main program:

* `c++ src/main.cpp -lipb_arithmetic -o results/bin/test_ipb_arithmetic -I include -L results/lib`
