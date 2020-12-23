/**********************************
 * @ Author: Saeed Arabi
 * @ Create Time: 2020-12-22 13:08:18
 * @ Email: arabi@iastate.edu
 **********************************/

// import header files
#include <cstdlib>
#include <iostream>
#include <random>
using namespace std;

int main() {
  // generate a random number (seed the mt19937 with a random number)
  random_device rnd;
  mt19937 gen(rnd());
  // generating a random number between (0, 99)
  uniform_int_distribution<int> dist(0, 99);
  int number = dist(gen);
  // int number = 5;
  // loop until find the number
  while (1) {
    // getting the number from user
    cout << "Please enter a number between 0 and 99: " << endl;
    int i = 0;
    cin >> i;
    if (cin.fail()) {
      cerr << "Error encountered, exiting..." << endl;
      cout << "The number was: " << number << endl;
      return EXIT_FAILURE;
    }
    if (i > 99 || i < 0) {
      cerr << "[WARNING] : Number must be between 0 and 99" << endl;
    } else if (number == i) {
      cout << "You won. You found the number!!!" << endl;
      break;
    } else if (number > i) {
      cout << "The number is greater!" << endl;
    } else if (number < i) {
      cout << "The number is smaller!" << endl;
    }
  }
  cout << "The number was " << number << endl;
  return EXIT_SUCCESS;
}