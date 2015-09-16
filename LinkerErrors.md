## First linker error
The first linker error was caused by the lack of "-c" in our terminal input.
The compiler tried to link all the source files, but could not since they 
were not there.
To avoid it, we should have included the "-c" in the terminal input. This
would have indicated that we wanted to compile the source file without
linking it to the other files.

## Second linker error
The second linker error we got was:
```
lineshuffler.o: In function `LineShuffler::LineShuffler()':
lineshuffler.cpp:(.text+0x15): undefined reference to `Random::Random()'
lineshuffler.o: In function `LineShuffler::shuffle()':
lineshuffler.cpp:(.text+0x1bf): undefined reference to `Random::next(unsigned int)'
lineshuffler.cpp:(.text+0x1e7): undefined reference to `exchange(std::string&, std::string&)'
x86_64-pc-linux-gnu-clang-3.5.0: error: linker command failed with exit code 1 (use -v to see invocation)
```

## Modified command
The modified command to fix the above error is:
```
clang++ -o shuffler lineshuffler.o shuffle.o random.o exchange.o
``