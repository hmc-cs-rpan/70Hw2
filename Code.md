## Questions from Issue C1

### Command to build the `shuffle` program:
```
clang++ -c -std=c++11 -pedantic -Wall -Wextra shuffle.cpp
clang++ -c -std=c++11 -pedantic -Wall -Wextra lineshuffler.cpp
clang++ -c -std=c++11 -pedantic -Wall -Wextra random.cpp

clang++ -o shuffler shuffle.o lineshuffler.o random.o

To run:
./shuffler
```

## Questions from Issue C2
### Command(s) to re-build the `shuffle` program:
``
clang++ -c std=c++11 -pedantic -Wall -Wextra shuffle.cpp
clang++ -c std=c++11 -pedantic -Wall -Wextra lineshuffler.cpp
clang++ -o shuffler shuffle.o lineshuffler.o random.o

```

## Questions from Issue C5
The behavior of the `shuffle` program has changed...
It now returns the lines in the same order that the user inputs them in.


## Questions from Issue C6
### Command(s) to re-build the `shuffle` program:
```
clang++ -c std=c++11 -pedantic -Wall -Wextra shuffle.cpp
clang++ -o shuffle shuffle.o lineshuffler.o random.o exchange.o
./shuffle
```
