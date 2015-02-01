#!/bin/bash

# Generate make files
cd build
cmake ..

# Compile the code to generate tests.exe
cmake --build . --target tests --config Debug

# Run tests
./tests/tests
