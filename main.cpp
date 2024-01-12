// @author Graham Hemingway @copyright 2024 - All rights reserved
#include "point.h"
#include <iostream>

int main() {
  Point p1;
  std::cout << "1 X: " << p1.getX() << std::endl;
  std::cout << "1 Y: " << p1.getX() << std::endl;

  Point p2(p1); // Copy construction
  Point p3;
  p3 = p1; // Assignment operation
  std::cout << "3 X: " << p3.getX() << std::endl;
  std::cout << "3 Y: " << p3.getX() << std::endl;
  return 0;
}
