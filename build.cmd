@echo 0ff

# Generate Visual studio project files
cd build
cmake.exe ..

# Compile the code to generate tests.exe
cmake.exe --build . --target tests --config Debug

# Run tests
tests\Debug\tests.exe
