#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
  std::srand(std::time(nullptr));
  int num;
  int randInt = std::rand() % 10 + 1;
  std::cout << "Choose a number between 1 and 10: ";
  std::cin >> num;
  while (true) {
    if (num == randInt) {
      std::cout << "Congrats, you got it right!\n";
      break;
    } else if (num > 10 || num < 1) {
      std::cout << "That's out of range! Try a number between 1 and 10.\n";
      break;
    } else {
      std::cout << "Wrong, try again: ";
      std::cin >> num;
    }
  }
  return 0;
}

// made in vim
// very neat and organised

