#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        int priority;
        Node* next;
        Node(int data) {
            this->data = data;
            this->priority = 0;
            this->next = NULL;
        }
};

class Queue {
    public: 
        Node* head; Node* tail;         // head -> start of the LL | tail -> last element of the LL
        Queue() {
            this->head = this->tail = NULL;
        }

        // insertAtEnd() in LL
        void enQueue(int data) {
            Node* newNode = new Node(data);
            if(this->head == NULL) {
                this->head = newNode;
                this->tail = newNode;
                cout << newNode->data << " has been enqueued!" << endl;
                return;
            }
            this->tail->next = newNode;
            this->tail = newNode;
            cout << newNode->data << " has been enqueued!" << endl;
            // || newNode->priority <
            // if(newNode->priority > head->priority) {

            // } 
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

int main() {
    Queue queue = Queue();                              // head = tail = NULL
    queue.enQueue(100);
    queue.enQueue(200);
    queue.enQueue(300);
    queue.enQueue(400);
    queue.enQueue(500);
    cout << queue.peek() << endl;                       // 100

    queue.deQueue();                                    // 100
    cout << queue.peek() << endl;                       // 200

    queue.deQueue();                                    // 200
    cout << queue.peek() << endl;                       // 300

    return 0;
}