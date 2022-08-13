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

template<typename T>
T times2(T val) {
    return val * 2;
}

template<typename T>
T multiply(T val, T val2) {
    return val * val2;
}

template<typename T>
T maximum(T val, T val2) {
    return (val < val2) ? val2 : val;
}

template <typename T, typename U>
class Person{
    public:
        T height;
        U weigth;
        static int numOfPeople;
        Person(T h, U w) {
            height = h;
            weigth = w;
            numOfPeople++;
        }
        void getData() {
            cout << "Height: " << height << " and Weight: " << weigth << endl;
        }

    };

template<typename T, typename U> int Person<T, U>::numOfPeople = 0;

int main(int argc, char** argv) {

    cout << "2 * 2 = " << times2(2) << endl;
    cout << "2.2 * 2.2 = " << multiply(2.2, 2.2) << endl;

    cout << "max(2, 4): " << maximum(2, 4) << endl;
    cout << "max('A', 'B'): " << maximum('A', 'B') << endl;
    cout << "max('Hello', 'World'): " << maximum("Hello", "World") << endl;

    Person<double, int> mikeTypson(5.83, 2.16);
    mikeTypson.getData();
    cout << "Number of Peoples: " << mikeTypson.numOfPeople << endl;

    return EXIT_SUCCESS;
}