// -*- C++ -*-

void
doSomething(int & y) {
  y = 5;
}

int
main() {

  const int x = 10;
  doSomething(x);

  return 0;
}
