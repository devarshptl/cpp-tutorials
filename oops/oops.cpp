#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

#include "Shape.h"
#include "Circle.h"

using namespace std;

// abstract class
class Shape2 {
public:
    virtual double area() = 0;
};

class Circle2: public Shape2 {
protected:
    double width;
public:
    Circle2(double w) {
        width = w;
    }
    double area() override {
        return 3.14159 * pow((width / 2), 2);
    }
};
void showArea(Shape& shape);
void showArea2(Shape2& shape);

int main(int argc, char** argv) {

    Shape square(10, 5);
    Circle circle(10);

    showArea(square);
    showArea(circle);

    Circle2 circle2(10);
    showArea2(circle2);

    return EXIT_SUCCESS;
}

void showArea(Shape& shape) {
    cout << "Area: " << shape.area() << endl;
}

void showArea2(Shape2& shape) {
    cout << "Area(with abstract class): " << shape.area() << endl;
}