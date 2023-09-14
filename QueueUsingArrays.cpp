#include<iostream>
using namespace std;

class Queue {
    private:
        int MAX;
        int front; int rear;                // holding the index of I elt & the last elt;
        int capacity;                       // denote number of elements
        int* arr;
    public:
        Queue(int n) {
            this->MAX = n;
            arr = new int[MAX];
            this->front = this->rear = -1;  // -1 symbolises that Queue is empty.
            this->capacity = 0;
        }
        // Appends the data to the Queue
        // T(n) = O(1)
        void enQueue(int data) {
            // if queue is full
            if(this->capacity >= MAX) {
                cout << "Queue is full";
                return;
            }
            // if the first value is inserted   | front = rear = 0
            else if(this->front == -1 && this->rear == -1) {
                this->arr[++front] = data;
                rear++;
                cout << data << " has been enQueued!" << endl;
                return;
            }
            // insertion in the queue -> REAR
            this->arr[++rear] = data;
            cout << data << " has been enQueued!" << endl;
        }
        // Removes the element from the Queue
        int deQueue() {
            if(isEmpty()) {
                cout << "Queue is Empty" << endl;
                return -1;
            }
            // deletion in the queue -> FRONT
            int deletedElement = arr[this->front];
            ++this->front;
            return deletedElement;
        }
        bool isEmpty() {
            if(this->front == -1 && this->rear == -1) return true;
            else return false;
        }
        // Utitity functions to get the value at start and end
        int getFront() { return this->arr[this->front]; }
        int getRear() { return this->arr[this->rear]; }
};

int main() {
    int n;
    cin >> n;

    Queue q1 = Queue(n);     // MAX = n; arr[n]; front = rear = -1;
    if( q1.isEmpty() ) cout << "Queue is Empty!" << endl; 
    else cout << "Queue is not empty" << endl;

    q1.enQueue(10);
    q1.enQueue(20);
    q1.enQueue(30);
    q1.enQueue(40);
    q1.enQueue(50);

    cout << q1.getFront() << endl;                       // 10
    cout << q1.getRear() << endl;                        // 50

    cout << "Value Deleted : " << q1.deQueue() << endl;
    cout << "Value Deleted : " << q1.deQueue() << endl;

    cout << q1.getFront() << endl;                       // 30
    cout << q1.getRear() << endl;                        // 50

    return 0;
}