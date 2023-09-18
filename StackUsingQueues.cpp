#include<iostream>
using namespace std;

// Given Queue(s), you have to create a data structures acting like a Stack using Queue(s)
class Node {
    public:
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class Queue {
    private:
        Node* head;  Node* tail;         // head -> start of the LL | tail -> last element of the LL
    public: 
        Queue() { }
        Queue(Node* head, Node* tail) {
            this->head = head;
            this->tail = tail;
        }
        // insertAtEnd() in LL
        int enQueue(int data) {
            Node* newNode = new Node(data);
            if(newNode == NULL) {
                return -1;
            }
            if(this->head == NULL) {
                this->head = newNode;
                this->tail = newNode;
                cout << newNode->data << " has been enqueued!" << endl;
                return newNode->data;
            }
            this->tail->next = newNode;
            this->tail = newNode;
            cout << newNode->data << " has been enqueued!" << endl;
            return newNode->data;
        }
        int deQueue() {
            if(this->head == NULL) {
                cout << "Nothing to deQueue!" << endl;
                return -1;
            }
            Node* temp = this->head;
            int deletedVal = temp->data;
            this->head = head->next;
            cout << temp->data << " has been dequeued!" << endl;
            delete(temp);
            return deletedVal;
        }
        bool isEmpty() {
            return this->head;
        }
        int peek() {
            if(this->head == NULL) return -1;
            else return this->head->data;
        }
};

class StackUsingQueues {
    public:
        Queue queue;
        StackUsingQueues() {
            this->queue = Queue(NULL, NULL);
        }
        int push(int data) {
            // No access to Node; Queue class (use the functions defined in the Queue class)
            if(queue.enQueue(data) == -1) {
                cout << "Stack Oevrflow";
                return -1;
            }
            return queue.enQueue(data); 
        }
        void pop() {
            // q1.deQueue();
        }
        int peek() { return -1; } 
    
};

int main() {
    
    StackUsingQueues stack = StackUsingQueues();
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

    return 0;
}