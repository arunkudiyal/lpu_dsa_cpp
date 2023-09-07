#include<iostream>
using namespace std;

int sum(int& num1, int& num2) {
    return num1 + num2;
}

int main() {
    // 1. Call by Value
    // int total = sum(100, 200);
    // cout << total << endl;
    // 2. Call by Reference
    int num1 = 10;
    int num2 = 20;
    int total2 = sum(num1, num2);                       // A call by value sum(10, 20)

    // int num1 = 100;
    // // int x = num1;
    // cout << num1 << endl;                           // 100
    // // Reference is an alias to a data;
    // // dataType& refName = variableName
    // int& x = num1;
    // cout << x << endl;
    // x = 200;
    // cout << num1 << " " << x << endl;
    // cout << &num1 << " " << &x << endl;

    return 0;
}