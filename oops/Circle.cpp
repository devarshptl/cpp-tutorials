
#include <cmath>
#include "Shape.h"
#include "Circle.h"

Circle::Circle(double width): Shape(width) {
}

Circle::~Circle() = default;

double Circle::area() {
    return 3.14159 * pow((width / 2), 2);
}