// expession = "[{([()])(){}}]"
// if every left opening bracket there exists a closing bracket on the right -> BALANCED
// OPTIONS :-
// [ ], { }, ( )        |  ( -> 0 && ) -> 1

// { () }{ }
// { () (} }
// { () }

// [(}] | ][

#include<iostream>
using namespace std;
#include<stack>

bool checkForBalancedParanthesis(string expression) {
    stack<char> myStack;
    // look for each char in the expression
    for(int i=0; i < expression.length(); i++) {
        if(myStack.empty()) myStack.push(expression[i]);
        else {
            if(myStack.top() == '{' && expression[i] == '}' || myStack.top() == '(' && expression[i] == ')' || myStack.top() == '[' && expression[i] == ']') {
                myStack.pop();
            } else {
                myStack.push(expression[i]);
            }
        }
    }
    if(myStack.empty()) return true;
    else return false;
}

int main() {
    string expression;
    cin >> expression;
    if(checkForBalancedParanthesis(expression)) cout << "Balanced" << endl;
    else cout << "Unbalanced" << endl;

    return 0;
}