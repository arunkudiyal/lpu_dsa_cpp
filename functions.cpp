#include<iostream>
using namespace std;

// Function Prototype
void factorial(int x);

// Functions - A block of code with some signature where you perform a specific task
// We can call this function anytime we require result.
// Signature of a function :-
// returnType functionName(parameters with their types)
void factorial(int x) {
    int result = 1;
    if(x == 0) cout << result << endl;
    else if(x < 0) {
        result = -1;
        cout << result << endl;
    } else {
        for(int i=2; i <= x; i++)
            result *= i;
        cout << result << endl;
    }
}

int main() {
    // Q:- Given 2 values, find the factorial of the two numbers
    int num1, num2;
    cin >> num1 >> num2;
    factorial(num1);
    factorial(num2);

    return 0;
}