#include<iostream>
using namespace std;

// Circular S LinkedList ---> lastNode->next = head
// Circular D LinkedList ---> lastNode->next = head ; firstNode->prev = lastNode 

class Node {
    public:
        int data;
        Node* prev; Node* next;
        Node(int data) {
            this->data = data;
            this->prev = this->next = NULL;
        }
};

// head->prev = tail
// tail->next = head 
class CircularDoublyLinkedList {
    public:
        Node* head; Node* tail;                         // head --> firstNode | tail --> lastNdde
        CircularDoublyLinkedList() {
            this->head = NULL;
            this->tail = NULL;
        }
        // Utility function to add a Node at the end of LL
        void append(int data);
        // Utility function to display values of LL
        void display();
        // Utility function to delete the last Node from the LL
        void deleteFromEnd();
};
// Scope Resolutors (::) :- Defining functions outside the class which are declared in the class.
// Syntax: returnType ClassName::functionName(params) { ... }
void CircularDoublyLinkedList::append(int data) {
    Node* newNode = new Node(data);
    // LL is empty, this is the first Node getting created
    if(this->head == NULL && this->tail == NULL) {
        this->head = this->tail = newNode;
        this->head->prev = this->tail->next = newNode;
        cout << data << " has been appended" << endl;
        return;
    }
    Node* temp = this->tail;                        // temp = head (if head = tail = firstName)
    this->tail->next = newNode;
    this->tail = newNode;
    // newNode is the new lastNode ; newNode->next & newNode->prev = NULL
    this->tail->prev = temp;
    this->tail->next = this->head;
    this->head->prev = this->tail;
    cout << data << " has been appended" << endl;
}
void CircularDoublyLinkedList::deleteFromEnd() {
    // LL is empty()
    if(this->head && this->tail == NULL) {
        cout << "LinkedList is empty" << endl;
        return;
    }
    // LL contains only 1 elt | head = tail = NULL
    if(this->head == this->tail) {
        Node* toBeDeleted = this->head;
        this->head = this->tail = NULL;
        delete(toBeDeleted);
        return;
    }
    Node* toBeDeleted = this->tail;
    this->tail->prev->next = this->head;
    this->head->prev = this->tail->prev;
    this->tail = toBeDeleted->prev;
    cout << toBeDeleted->data << " has been deleted!" << endl;
    delete(toBeDeleted);
}
void CircularDoublyLinkedList::display() {
    Node* temp = this->head;
    while(temp->data != this->tail->data) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

int main() {
    CircularDoublyLinkedList list = CircularDoublyLinkedList();         // head = tail = NULL
    list.append(100);
    list.append(200);
    list.append(300);
    list.append(400);
    list.append(500);
    list.display();                             // 100 200 300 400 500

    list.deleteFromEnd();                       // 500
    list.deleteFromEnd();                       // 400

    list.display();                             // 100 200 300

    return 0;
}