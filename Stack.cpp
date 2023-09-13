// STACK :-

// push(int data) :- Inserts the element at the top of the stack.
// pop() :- Removes elemeny from top of the stack.
// peek() :- Returns the top-most element.

# include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class Stack {
    public:
        Node* head; Node* top;
        Stack() {
            this->head = NULL;
            this->top = NULL;
        }

        // T(n) = O(n) | Inserting the Node at the end of the LL
        void push(int data) {
            // Inserts the element at the top of the stack.
            Node* newNode = new Node(data);
            // newNode was never assigned an address
            if(newNode == NULL) {
                cout << "Stack Overflow." << endl;
                return;
            }
            else if(this->head == NULL) {
                this->head = newNode;
                this->top = newNode;
                return;
            }
            Node* temp = this->head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
            this->top = newNode;
        }

        // T(n) = O(n) | Inserting the Node at the end of the LL
        void pop() {
            if(this->head == NULL) {
                cout << "Stack Underflow" << endl;
                return;
            }
            // Only have one element remaining in the stack
            else if(this->head != NULL && this->top != NULL && this->head == this->top) {
                cout << top->data << " has been popped!" << endl;
                delete(this->top);
                this->top = this->head = NULL;
                return;
            }
            Node* temp = this->head;
            while(temp->next->next != NULL)
                temp = temp->next;
            delete(temp->next);
            temp->next = NULL;
            this->top = temp;
        }

        bool isEmpty() {
            return this->head == NULL;
        }

        int peek() {
            // Returns the top-most element.
            return this->top->data;
        }
};

int main() {
    Stack stack = Stack();                          // head = NULL; top = NULL;
    stack.pop();                                    // Underflow

    stack.push(100);
    cout << stack.peek() << endl;                   // 100
    stack.push(200);
    cout << stack.peek() << endl;                   // 200
    stack.push(300);
    cout << stack.peek() << endl;                   // 300
    stack.push(400);
    cout << stack.peek() << endl;                   // 400

    stack.pop();
    cout << stack.peek() << endl;                   // 300
}