#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

// public by default
struct Shape {
    double length, width;
    Shape(double l=1, double w=1) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
private:
    int id;
};

struct Circle: Shape {
    Circle(double w) {
        this->width = w;
    }
    double area() {
        return 3.14159 * pow((width/2), 2);
    }
};

int main(int argc, char** argv) {
    Shape shape(10,10);
    cout << "Area: " << shape.area() << endl;
    Circle circle(10);
    cout << "Circle Area: " << circle.area() << endl;
    Shape rectangle(10, 15);
    cout << "Rectangle Area: " << rectangle.area() << endl;


    return EXIT_SUCCESS;
}