#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <regex>

using namespace std;

int main(int argc, char** argv) {

    string str = "The ape was at the apex";
    regex reg ("(ape)[^ ]?");

    smatch matches;
    if(regex_search(str, matches, reg) == true) {
        cout << matches.size() << " Matches" << endl;

        while(regex_search(str, matches, reg)) {
            cout << matches.str(1) << endl;
            cout << "At index " << matches.position(1) << endl;
            str = matches.suffix().str();
        }

    }

    return EXIT_SUCCESS;
}