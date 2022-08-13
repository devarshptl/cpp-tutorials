#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    while(false) {
        // statement
        continue;
    }

    do {
        cout << "Hello" << endl;
    } while(false);

    for(int i=0; i<2; i++) {
        cout << "Hello\n";
    }

    return EXIT_SUCCESS;
}