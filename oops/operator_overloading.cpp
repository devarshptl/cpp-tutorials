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

class Box {
public:
    double length, width, breadth;
    string boxString;
    Box() {
        length = 1, width = 1, breadth = 1;
    }
    Box(double l, double w, double b) {
        length = l, width = w, breadth = b;
    }
    Box& operator ++ () {
        length++;
        width++;
        breadth++;
        return *this;
    }
    operator const char*() {
        ostringstream boxStream;
        boxStream << "Box: " << length << ", " << width << ", " << breadth;
        boxString = boxStream.str();
        return boxString.c_str();
    }

    Box operator+ (const Box& box2) {
        Box boxSum;
        boxSum.length = length + box2.length;
        boxSum.width = width + box2.width;
        boxSum.breadth = breadth + box2.breadth;
        return boxSum;
    }

    bool operator == (const Box& box2) {
        return ((length == box2.length) ||
                (width == box2.width) ||
                (breadth == box2.breadth));
    }

};


int main(int argc, char** argv) {

    Box box(10, 10, 10);
    Box box2(5, 5, 5);
    ++box;
    cout << box << endl;
    cout << "Box1 + Box2 = " << (box + box2) << endl;
    cout << "Box1 == Box2 = " << (box == box2) << endl;

    return EXIT_SUCCESS;
}