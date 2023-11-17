#include<iostream>
using namespace std;

// Q:- A class which handles the addition operation for two integer and two float
// template <class T>
// class Operation {
//     public:
//         T num1; T num2;
//         Operation(T num1, T num2) {
//             this->num1 = num1;
//             this->num2 = num2;
//         }
//         // specify abny method in the class working with generics
//         // returnType nameFunction() { }
//         T add() const {
//             return num1 + num2;
//         } 
// };

// template <class S>
// S subtract(S num1, S num2) {
//     return num1 - num2;
// }

// int main() {
//     Operation<int> operation(10, 15);
//     Operation<double> operation2(10.00, 15.99);
//     Operation<string> operation3("Hello", "Bye");
//     cout << operation.add() << endl;                    // 25
//     cout << operation2.add() << endl;                   // 25.99
//     cout << operation3.add() << endl;                   // HelloBye
// }

template <typename Z>
class A {
    public:
        Z value;
        A(Z val) {
            this->value = val;
        }
        void display() const {
            cout << this->value << endl;
        }
};

template <typename Y>
class B: public A<Y> {
    public:
        B(Y value) {
            A<Y>(value);
        }
        void display() const {
            cout << this->value << endl;
        }
};

int main() {
    B<int> b(100);
    b.display();
}