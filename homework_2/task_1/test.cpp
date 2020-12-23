#include <cstdlib>
#include <iostream>

#include "rand_num.hpp"

int main() {
  std::cout
      << "Welcome to the guessing game! Please input an integer number (0~99): "
      << std::endl;
  int ans = rand_num(0, 99);
  int num = -1;
  std::cout << "HINT: " << ans << std::endl;

  while (true) {
    std::cin >> num;
    if (std::cin.fail()) {
      std::cerr << "Error encountered, exiting..." << std::endl;
      std::cout << "The number you are guessing is " << ans << std::endl;
      return EXIT_FAILURE;
    }

    if (num == ans) {
      std::cout << "The number is correct. You win!\n";
      break;
    }

    else if (num < 0 || num > 99) {
      std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
    }

    else if (num > ans) {
      std::cout << "The number you are guessing is smaller.\n";
    }

    else if (num < ans) {
      std::cout << "The number you are guessing is larger.\n";
    }
  }

  std::cout << "The number you are guessing is " << ans << std::endl;

  return EXIT_SUCCESS;
}