#include<iostream>
using namespace std;

// Function Prototype
int factorial(int x);

// Functions - A block of code with some signature where you perform a specific task
// We can call this function anytime we require result.
// Signature of a function :-
// returnType functionName(parameters with their types)
int factorial(int x) {
    int result = 1;
    if(x == 0) result = 1;
    else if(x < 0) result = -1;
    else {
        for(int i=2; i <= x; i++)
            result *= i;
    }
    return result;
}

int main() {
    // Q:- Given 2 values, find the factorial of the two numbers, 
    // and print the factorial which is greatest
    int num1, num2;
    cin >> num1 >> num2;
    if(factorial(num1) > factorial(num2)) cout << factorial(num1) << endl;
    else cout << factorial(num2) << endl;;

    return 0;
}