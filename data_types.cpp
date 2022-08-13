#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    char myChar = 'A';
    bool myBool = true;
    short int myShort = 12;
    int myInt = 1;
    long int myLongInt = 111;
    long long myLongLong = 111111111111;
    float myFloat = 31.4;
    double myDouble = 31.33333333;
    long double myLongDouble = 321.22222222;

    auto myAuto = 1;

    cout << "char size: " << sizeof(char) << " bytes" << endl;
    cout << "bool size: " << sizeof(bool) << " bytes" << endl;
    cout << "short int size: " << sizeof(short int) << " bytes" << endl;
    cout << "int size: " << sizeof(int) << " bytes" << endl;
    cout << "long int size: " << sizeof(long int) << " bytes" << endl;
    cout << "long long size: " << sizeof(long long) << " bytes" << endl;
    cout << "float size: " << sizeof(float) << " bytes" << endl;
    cout << "double size: " << sizeof(double) << " bytes" << endl;
    cout << "long double size: " << sizeof(long double) << " bytes" << endl;

    return EXIT_SUCCESS;
}