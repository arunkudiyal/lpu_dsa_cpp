#include<iostream>
using namespace std;

class Stack {
    private:
        int MAX;
        int top;
        int* arr;
    public:
        Stack(int n) {
            this->MAX = n;
            arr = new int[MAX];
            top = -1;               // we do not have any value in the array
        }

        // T(n) = O(1)
        void push(int data) {
            // arr[100], arr[101], arr[102], arr[103] | index:- 0 - 99
            if(this->top >= this->MAX) {
                cout << "Stack Overflow";
                return;
            } else {
                this->arr[++top] = data;
                cout << data << " has been pushed!" << endl;
            }
        }

        // T(n) = O(1)
        void pop() {
            if(top < 0) {
                cout << "Stack Underflow";
                return;
            } else {
                int value = arr[top--];
                cout << value << " has been popped!" << endl;
            }
        }
        int peek() {
            return this->arr[this->top];
        }
};

int main() {
    // Stack Object
    int n;
    cin >> n;

    Stack myStack = Stack(n);                           // arr[100]; top = 0
    myStack.push(100);
    myStack.push(200);
    cout << myStack.peek() << endl;                     // 200
    myStack.push(300);
    myStack.push(400);
    cout << myStack.peek() << endl;                     // 400
    myStack.push(500);
    myStack.push(600);
    cout << myStack.peek() << endl;                     // 600

    myStack.pop();
    cout << myStack.peek() << endl;                     // 500
    myStack.pop();
    cout << myStack.peek() << endl;                     // 400

    myStack.push(700);
    myStack.push(800);
    cout << myStack.peek() << endl;                     // 800

    myStack.pop();
    cout << myStack.peek() << endl;                     // 700

    return 0;
}