#include <iostream>
#include <cstdlib>
#include <numeric>

using namespace std;

int main(int argc, char** argv) {

    double num3 = 10, num4 = 0;

    try {
        if (num4 == 0) {
            throw "Division by Zero Error";
        } else {
            printf("%.1f / %.1f = %.1f", num3, num4, (num3 / num4));
        }
    } catch (const char* exp) {
        cout << "Error: " << exp << endl;
    }


    return EXIT_SUCCESS;
}