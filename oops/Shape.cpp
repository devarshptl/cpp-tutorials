#include "Shape.h"

Shape::Shape(double length) {
    this->height = length;
    this->width = length;
}

Shape::Shape(double height, double width) {
    this->height = height;
    this->width = width;
}

Shape::~Shape() = default;

void Shape::setHeight(double height) {
    this->height = height;
}
double Shape::getHeight() {
    return this->height;
}

void Shape::setWidth(double width) {
    this->width = width;
}
double Shape::getWidth() {
    return this->width;
}

int Shape::getNumOfShapes() {
    return numOfShapes;
}

double Shape::area() {
    return this->height * this->width;
}

int Shape::numOfShapes = 0;