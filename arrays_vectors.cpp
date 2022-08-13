#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(int argc, char** argv) {

    int arr[] = {1, 2};
    int arr1D[2] = {1, 2};
    int arr2D[2][2] = {{1,2}, {2,4}};

    vector<int> myVec(2);
    myVec[0] = 1;
    myVec[1] = 2;
    myVec.push_back(1);
    myVec.push_back(2);
    cout << "vector size: " << myVec.size() << endl;

    for(auto i: myVec) {
        cout << i << endl;
    }

    return EXIT_SUCCESS;
}