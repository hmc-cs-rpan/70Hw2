// -*- C++ -*-

#include <iostream>

using std::cout;
using std::endl;

int
main() {

  const unsigned int x = 10;

  /* This was my first try; it's not working. */
  /*
  short y = 42 / x + 3;

  size_t modifiedX = 42 / x;

  /* This is my second try; it seems to be working */
  size_t y = modifiedX + 3;

  return 0;
}
