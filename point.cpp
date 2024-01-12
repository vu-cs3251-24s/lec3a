// @author Graham Hemingway @copyright 2024 - All rights reserved
#include "point.h"
#include <iostream>

// default constructor
Point::Point() {
  x = 0;
  y = 0;
  std::cout << "I'm here 😁!\n";
}

// destructor
Point::~Point() { std::cout << "I'm done 😭!\n"; }

// get the x coordinate
int Point::getX() { return x; }

// set the x coordinate
void Point::setX(int newX) { x = newX; }