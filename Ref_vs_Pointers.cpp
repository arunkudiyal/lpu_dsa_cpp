#include<iostream>
using namespace std;

int main() {
    int num1 = 100;
    // Pointer to Integer
    int* ptr = &num1;
    cout << ptr << endl;
    cout << sizeof(ptr) << endl;
    // Pointer to Char/Char[] // Pointer to Float // Pointer to Boolean
    
    // 2. Pointer to Array
    int num[] = {10, 20, 30, 40, 50};
    int* arrPtr = num;                          // Address of the I element

    // 3. Pointer to Structures
    // struct demo {
    //     int data1;
    //     string data2;
    //     bool data3;
    // }demo1, demo2, demo3;
    // int num2 = 200;
    // // Syntax :- struct sName *ptr
    // // struct demo *strPtr;
    // int* ptr2 = &num2;
    // // Access the value kept at the pointer -> *strPtr
    // // cout << *strPtr << endl;             // ERROR

    // demo1.data1 = 100;
    // demo1.data2 = "Hello World";
    // demo1.data3 = true;
    // struct demo1 *strPtr2;
    // cout << *(strPtr2) << endl;

    // 4. Pointer to Functions

    return 0;
}