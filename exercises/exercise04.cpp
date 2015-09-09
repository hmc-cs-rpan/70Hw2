// -*- C++ -*-

void
doSomething(int & y) {
  y = 5;
}

int
main() {

  unsigned int x = 10;
  doSomething(x);

  return 0;
}
