#include <iostream>
#include <cstdlib>
#include <memory>
#include <stdio.h>

using namespace std;

void DoubleArray(int*, int);

int main(int argc, char** argv) {

    int age = 43;
    int* pAge = &age;
    cout << "age: " << age << endl;
    cout << "age(from pointer): " << *pAge << endl;

    *pAge = 23;
    cout << "change aged(via pointer - pAge): " << age << endl;

    int intArray[] = {1, 2, 3};
    int* pIntArray = intArray;
    cout << "1st address (via pointer): " << pIntArray << endl;
    pIntArray++; // or advance(pIntArray, 1);
    cout << "2st address (via pointer): " << pIntArray << endl;


    DoubleArray(pIntArray, 3);

    for(int i=0; i < 3; i++) {
        cout << intArray[i] << endl;
    }

    int amtToStore;
    cout << "How many numbers to store: ";
    cin >> amtToStore;

    int *pNums;
    pNums = (int*) malloc(amtToStore * sizeof(int));
    if(pNums != NULL) {
        int i=0;
        while(i < amtToStore) {
            cout << "Enter a number: ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "You entered this numbers in malloc: " << endl;
    for(int i=0; i<amtToStore; i++)
        cout << pNums[i] << endl;
    delete pNums;

    unique_ptr<int[]> pNumsUniquePtr(new int[amtToStore]);
    if(pNumsUniquePtr != NULL) {
        int i=0;
        while(i < amtToStore) {
            cout << "Enter a number: ";
            cin >> pNumsUniquePtr[i];
            i++;
        }
    }
    for(int i=0; i < amtToStore; i++)
        cout << pNumsUniquePtr[i] << endl;
    return EXIT_SUCCESS;
}

void DoubleArray(int *pIntArray, int size) {
    for (int i = 0; i < size; ++i) {
        pIntArray[i] = pIntArray[i] * 2;
    }
}