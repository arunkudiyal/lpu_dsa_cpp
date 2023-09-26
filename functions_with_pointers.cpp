#include<iostream>
using namespace std;

// void swap(int* x, int* y) {
//     int z = *x;
//     *x = *y;
//     *y = z;
// }

// int main() {
//     // a = 2 ; b = 3
//     int a, b;
//     cin >> a;
//     cin >> b;

//     cout << a << " " << b << endl;              // 12 13

//     // 1. pass by value | Actual Parameters
//     // swap(12, 13);
//     // swap(a, b);

//     // 2. pass by rafernces (address)
//     swap(&a, &b);

//     cout << a << " " << b << endl;              // 13 12
// }


// function Pointers to Member Functions :-
// int multiply(int a, int b) {
//     return a * b;
// }
// int add(int a, int b) {
//     return a + b;
// }
// int main() {
//     // pointer to a function :- Function --> Heap Memory
//     // returnType (*func)(paramDT, ....)
//     int (*foo)(int, int);

//     foo = multiply;
//     cout << "Multiplication is " << foo(10, 5) << endl;

//     foo = add;
//     cout << "Addition is " << foo(10, 15) << endl;
// }


// Returning pointers from functions
// int* foo(int* ptr) {
//     int res = (*ptr) * (*ptr);
//     int* mem = &res;
//     return mem0;
// }

// int main() {
//     int x = 15;
//     int* ans = foo(&x);
//     cout << *ans << endl;
// }

// // struct* & class*
// class Student {
//     public:
//         int rNo;
//         char name[50];
//         int marks[5];
//         Student(int rNo, char name[], int marks[]) {
//             this->rNo = rNo;
//             this->name = name;
//             this->marks = marks;
//         }
// };

// // StrName* nameOfPtr = 
// Student* student1 = new Student(100, {'H', 'e', 'l'}, {});
// cout << student1 << endl;


// Types of Pointers :-
int main() {
    // 1. Dangling Pointer :- Type of a pointer which does not point to any value
    // int variable = 100;
    // int* temp = &variable;

    // // free() :- Removes the value kept at the pointer
    // // temp is a dangling pointer
    // free(temp);

    // // 2. NULL Pointers
    // temp = NULL;

    // 3. void pointers :- pointer which points towards nothing; which can point to any type of a data
    // Typeless Pointer
    int val1 = 10;
    int* ref1 = &val1;

    char c = 'A';
    void* ref3 = &c; 

    cout << *ref1 << endl;

    void* ref2 = &val1;
    // cout << *ref2 << endl;              // ERROR


    // int* ptr1 = NULL             | NULL

    // Derefencing of Void Pointer :- Specify the type of the value when using the use
    // cout << *((int*) ref2) << endl;
    // cout << *((char*) ref3) << endl;


    // // Uninitialised Pointer | Wild Pointer :-
    // float myFloat = 3.14;

    // int* ptr2;
    // void* ptr3;                         // Wild Void Pointer
    // ptr3 = &myFloat;
    // cout << *((float*) ptr3);           // 3.14


    // ARRAYS :-
    int arr1[] = {10, 20, 30, 40};
    int arr2[10] = {};

    // 1. Arrays are contiguous
    // 2. Arrays provides indices because it holds the mem loc of the 1st elt
    // and knows where the next elements live
    cout << arr1 << endl;                    // 0x16fcb7260

    // Array Point --> dataType*
    int* ptr = &arr1[0];                        // arr[index]
    // print the values
    for(int i=0; i < 4; i++) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}