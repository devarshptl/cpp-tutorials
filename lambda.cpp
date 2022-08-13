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

vector<int> getRandVector(int, int, int);

int main(int argc, char** argv) {

    vector<int> randVec = getRandVector(10, 1,  50);
    sort(randVec.begin(), randVec.end(),
         [](int x, int y){ return x < y; });
    for(auto val: randVec)
        cout << val << endl;

    vector<int> evenVec;
    copy_if(randVec.begin(), randVec.end(), back_inserter(evenVec), [](int x) {return (x%2) ==0;});
    for (auto val: evenVec)
        cout << val << endl;

    int sum=0;
    for_each(randVec.begin(), randVec.end(),
             [&](int x) {sum += x;});
    cout << "Sum: " << sum << endl;

    return EXIT_SUCCESS;
}

vector<int> getRandVector(int numOfValues, int min, int max) {
    vector<int> vecValues;
    srand(time(NULL));
    int i=0, randVal = 0;
    while(i < numOfValues) {
        randVal = min + rand() % (max - min + 1);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}