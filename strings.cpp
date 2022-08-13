#include <iostream>
#include <cstdlib>
#include <string>
#include <numeric>

using namespace std;

int main(int argc, char** argv) {

    string str1 = "I'm a string";
    cout << "1st: " << str1[0] << endl;
    cout << "Last: " << str1.back() << endl;
    cout << "Length: " << str1.length() << endl;
    string str2 = str1;
    string str3(str2, 4);
    string str4 = str1 + " and your not";
    str4.append("!");
    str4.erase(12, str4.length() - 1);
    cout << "New String: " << str4 << endl;
    if(str4.find("string") != string::npos)
        cout << "String Index: " << str4.find("string") << endl;

    cout << "Substring: " << str4.substr(6, 6) << endl;
    string strNum = to_string(1);
    cout << strNum << endl;

    return EXIT_SUCCESS;
}