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

double addNumbers(double, double);

string assignName();
void assignNameByPointer(string*);
void assignNameByReference(string&);

int MultiplyBy2(int);
int MultiplyBy3(int);
int DoMath(function<int(int)>, int);

int main(int argc, char** argv) {

    // regular functions
    printf("%.1f + %.1f = %.1f\n", 1.1, 1.2, addNumbers(1.1, 1.2));

    // pass by reference
    string name;
    name = assignName();
    cout << "Returned from function(name): " << name << endl;
    assignNameByPointer(&name);
    cout << "Pass by Pointer(name): " << name << endl;
    assignNameByReference(name);
    cout << "Pass by Reference(name): " << name << endl;


    function<int(int)> times2 = MultiplyBy2;
    cout << "5 * 2 = " << times2(5) << endl;
    cout << "6 * 2 = " << DoMath(times2, 6) << endl;

    vector<function<int(int)>> funcs(2);
    funcs[0] = MultiplyBy2;
    funcs[1] = MultiplyBy3;

    cout << "10 * 2 = " << funcs[0](10) << endl;

    // lambda function
    int (*twodarray)(int, int) = [](int a, int b){return a+b;};
    cout << "lambda function: " << twodarray(1, 2);

    return EXIT_SUCCESS;
}

double addNumbers(double d1, double d2) {
    return d1+d2;
}

string assignName() {
    return "Returned Name";
}

void assignNameByPointer(string* name) {
    *name = "Assigned by Pointer(*)";
}

void assignNameByReference(string& name) {
    name = "Assigned by Reference(&)";
}

int MultiplyBy2(int num) {
    return num * 2;
}

int MultiplyBy3(int num) {
    return num * 3;
}

int DoMath(function<int(int)> func, int num) {
    return func(num);
}