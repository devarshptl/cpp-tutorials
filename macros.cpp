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

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

int main(int argc, char** argv) {

    cout << "Circle Area: " << AREA_CIRCLE(5) << endl;

    return EXIT_SUCCESS;
}