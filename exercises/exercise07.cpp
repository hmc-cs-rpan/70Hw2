// -*- C++ -*-

#include <iostream>

using std::cout;
using std::endl;

int
main() {

  unsigned int x = 10;

  printNumber(x);

  return 0;
}

void
printNumber(const unsigned int y) {
  cout << "the number is " << y << endl;
}
