#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    const int num = -1;
    if (num > 0) {
        cout << "num > 0" << endl;
    } else if (num == 1) {
        cout << "num is 1" << endl;
    } else {
        cout << "invalid number" << endl;
    }

    switch (num) {
        case (num > -1):
            cout << "Num > -1" << endl;
            break;
        case (num < 0):
            cout << "Num < 0" << endl;
            break;
        default:
            cout << "Default" << endl;
            break;
    }

    // Arithmetic Operators: <, >, <=, >=, ==, !=
    // Logical Operators: &&, ||, !
    // Bitwise Operators: &, |, ^, ~

    return EXIT_SUCCESS;
}