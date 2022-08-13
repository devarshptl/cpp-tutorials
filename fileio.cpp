#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

    ofstream writeToFile;
    ifstream readFromFile;
    string txtToWrite = "";
    string txtFromFile = "";

    writeToFile.open("test.txt", ios_base::out | ios_base::trunc);
    if (writeToFile.is_open()) {
        writeToFile << "Beginning of File\n";
        cout << "Enter data to write: ";
        getline(cin, txtToWrite);
        writeToFile << txtToWrite;
        writeToFile.close();
    }

    readFromFile.open("test.txt", ios_base::in);

    if(readFromFile.is_open()) {
        while (readFromFile.good()) {
            getline(readFromFile, txtFromFile);
            cout << txtFromFile << endl;
        }
        readFromFile.close();
    }

    return EXIT_SUCCESS;
}