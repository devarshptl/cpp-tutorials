#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main(int argc, char** argv) {

    cout << "short int limits: (" << numeric_limits<short int>::min() << ") - (" << numeric_limits<short>::max() << ")" << endl;
    cout << "int limits: (" << numeric_limits<int>::min() << ") - (" << numeric_limits<int>::max() << ")" << endl;
    cout << "long int limits: (" << numeric_limits<long int>::min() << ") - (" << numeric_limits<long int>::max() << ")" << endl;
    cout << "long long limits: (" << numeric_limits<long long>::min() << ") - (" << numeric_limits<long long>::max() << ")" << endl;
    cout << "float limits: (" << numeric_limits<float>::min() << ") - (" << numeric_limits<float>::max() << ")" << endl;
    cout << "double limits: (" << numeric_limits<double>::min() << ") - (" << numeric_limits<double>::max() << ")" << endl;
    cout << "long double limits: (" << numeric_limits<long double>::min() << ") - (" << numeric_limits<long double>::max() << ")" << endl;


    return EXIT_SUCCESS;
}