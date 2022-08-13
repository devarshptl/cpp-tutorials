#include <iostream>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;

int main(int argc, char** argv) {

    vector<string> words;
    stringstream ss("Some random words");
    string word;
    while(getline(ss, word, ' ')) { // by default the delimiter is '\n'
        words.push_back(word);
    }
    for(auto w: words) {
        cout << w << endl;
    }

    return EXIT_SUCCESS;
}