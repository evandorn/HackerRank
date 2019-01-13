// Problem - https://www.hackerrank.com/challenges/c-tutorial-for-loop

#include <iostream>
#include <cstdio>

int main() {

  int a, b;
  std::cin >> a;
  std::cin >> b;

  for (int i = a; i < (b + 1); i++) {
    if (i == 1) { std::cout << "one" std::endl; }
    else if (i == 2) { std::cout << "two" << endl; }
    else if (i == 3) { std::cout << "three" << endl; }
    else if (i == 4) { std::cout << "four" << endl; }
    else if (i == 5) { std::cout << "five" << endl; }
    else if (i == 6) { std::cout << "six" << endl; }
    else if (i == 7) { std::cout << "seven" << endl; }
    else if (i == 8) { std::cout << "eight" << endl; }
    else if (i == 9) { std::cout << "nine" << endl; }
    else if (i % 2 == 0) { std::cout << "even" << endl; }
    else { std::cout << "odd" << endl; } 
  }
  return 0;
}
