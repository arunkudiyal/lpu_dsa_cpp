#include<iostream>
using namespace std;

int main() {
    // Pointers :- a variable which store memory address inside it.
    // Variable :- a memory space / container which stores values in it.
    int n = 100;
    cout << n << endl;
    // print the address of any variable
    cout << "Memory address of n is : " << &n << endl;

    // de-structure / de-reference / access the value from a address
    // type* pointerName = &variable
    int* memoN = &n;

    // NOTE:- The type of the pointer depends on the data-type of the value stored.
    cout << memoN << endl;

    // type* -> About to store a address | int*, char*, float*

    // to access the value from the pointer -> use *
    // Value -> *pointerName
    cout << "Value kept at " << memoN << " : " << *memoN << endl;
    cout << "Address of the pointer - " << &memoN << endl;

    // VOID POINTER - Exceptions

    return 0;
}