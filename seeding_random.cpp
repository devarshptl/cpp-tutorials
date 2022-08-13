#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {

    // seeding and random number generator
    srand(time(NULL));
    int secretNum = rand() % 11;
    cout << "secret number: " << secretNum << endl;

    return EXIT_SUCCESS;
}