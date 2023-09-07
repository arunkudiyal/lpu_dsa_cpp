#include<iostream>
using namespace std;

class Student {
    private:
        int rno; string name; string bgroup; float percentage;
    public:
        // CONSTRUCTORS :- A way to initialise the data-members; at the time when user is creating the object of the class.
        // 1. Default Const (donot have any params) | 2. Parameterised Const (have params)
        // -> Name of the constructor & name of the class are exactly same.
        // -> constructors don not have a return type, not even void.
        Student() {
            cout << "Creating an object for class Studnt..." << endl;
        }
        Student(int rno, string name) {
            this->rno = rno;
            this->name = name;
        }
        Student(int rno, string name, string bgroup, float percentage) {
            // data-member = parameter
            this->rno = rno;
            this->name = name;
            this->bgroup = bgroup;
            this->percentage = percentage;
        }
        // Destructor :- Destroy the values in the given object when the program terminates.
        ~Student() {
            cout << "Destroying the objects of class Student";
        }
        void display() {
            cout << this->rno << " " << this->name << " " << this->bgroup << " " << this-> percentage << endl;
        }
};

int main() {
    // creating the object of the Student class by passing initial values to it.
    // Way 1:- Using default constructor:- Student s1;
    // Student s1;         // calling the default constructor
    Student s2(3132, "Student - 1", "A-", 92.546);
    s2.display();           
    return 0;
}