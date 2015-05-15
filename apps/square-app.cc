#include <square.h>
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
  if( argc < 2 ) {
    std::cout << "Usage: square-app <number>" << std::endl;
    return 0;
  }

  float number = atof(argv[1]);

  std::cout << "Square of " << number << " is: " << square(number) << std::endl;
  return 0;
}
