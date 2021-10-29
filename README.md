# TEST example

## How to build

Go in `build` folder and execute `cmake ..`.

It create a lot of other files and folder especially the `Makefile`. So you can build the app executing `make`.

You have to call to `cmake ..` should be executed every time you add a new file.

The file

## Run test

Go inside `build/tst` folder and execute:

`make && ./MasterCrupt_tst`

```
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from MasterCruptAT
[ RUN      ] MasterCruptAT.testSecret
[       OK ] MasterCruptAT.testSecret (0 ms)
[----------] 1 test from MasterCruptAT (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```

You can execute a single test in this way:

`make && ./tst/MasterCrupt_tst --gtest_filter='MasterCruptAT.*'`
