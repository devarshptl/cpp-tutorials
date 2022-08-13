#include <iostream>
#include <cstdlib>
#include <numeric>

using namespace std;

int main(int argc, char** argv) {

    char letterZ = 'z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "Is z a letter or number: " << isalnum(letterZ) << endl;
    cout << "Is 3 a number: " << isdigit(num5) << endl;
    cout << "Is space a space: " << isspace(aSpace) << endl;

    return EXIT_SUCCESS;
}