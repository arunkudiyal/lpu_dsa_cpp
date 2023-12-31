// Infix to Postfix Conversion
// Infix Expression :- operand1 operator operand2 ; a+b | a-b | a*b | a/b | a^b
// Postfix Expression = operand1 operand2 operator
// Expression :- 2+3 :-         
//      +
//  2       3
// Expression :- (2+3)*(4+7) :-
//                *
//          +           +
//      2       3   4       7 

// Priority Set :-
// '+' & '-' --> Least Priority --> a+b-d+e = ab+d-e+ 
// '*' & '/' --> Second Least --> L to R
// '^' --> Third Least --> a+b^c*d --> a+ bc^ *d --> a+ bc^d* -> abc^d*+
// '()' --> Most priority --> (a + b) --> ab+ | (3+4) = 5; 3+4 = 34+

// a+b*c --> a + bc* --> abc*+
// stack = []       |   ouput = abc*+
// stack = ['('] ; output = a
// (a+b)/(c*d) --> ab+cd*/

// a*b+c --> ab* + c --> ab*c+
// stack = []       | output = ab*c+

// () --> least, [] --> second least, {} --> highest

#include<iostream>
#include<stack>
using namespace std;

int getPriority(char op) {
    if(op == '+' || op == '-') return 0;
    else if(op == '*' || op == '/') return 1;
    else if(op == '^') return 2;
    return -1;
}

void infixToPostfix(string input) {
    stack<char> myStack;
    string output;
    int n = input.length();
    // read each charchater from the input string
    for(int i=0; i < n; i++) {
        char ch = input[i];
        // oprands :- 'A-Z' || 'a-z' || '0-9'
        if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')  ) output += ch;
        else if(ch == '(') myStack.push(ch);
        else if(ch == ')') {
            while(myStack.top() != '(') {
                output += myStack.top();
                myStack.pop();
            }
            // pop the ')'
            myStack.pop();
        } 
        // if ch is the operator
        else {
            while(!myStack.empty() && getPriority(input[i]) <= getPriority(myStack.top())) {
                output += myStack.top();
                myStack.pop();
            }
            myStack.push(ch);
        }
    }
    // nothing to read from the input :- pop the element & append it to the output
    while(!myStack.empty()) {
        output += myStack.top();
        myStack.pop();
    }
    cout << output << endl;
}

int main() {
    string input;
    cin >> input;
    infixToPostfix(input);

    return 0;
}