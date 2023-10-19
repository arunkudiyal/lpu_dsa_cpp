#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// void display(queue<int> q) {
//     while(!q.empty()) {
//         cout << q.top() << " ";
//         q.pop();
//     }
//     cout << endl;
// }

int main() {
    priority_queue<int> queue;
    stack<int> temp;

    // push() -> inserts an int item into the quueue
    queue.push(5);
    queue.push(5);
    queue.push(9);
    queue.push(45);
    queue.push(50);
    queue.push(11);
    queue.push(20);

    // convert to asc
    while(!queue.empty()) {
        temp.push( queue.top() );
        queue.pop();
    }

    // put the values back
    while(!temp.empty()) {
        queue.push( temp.top() );
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;

    // top() of the queue
    // cout << queue.top() << endl; 
    // display(queue);                                 // 50 45 20 11 9 5 5
    // display(queue);                                 // 50 45 20 11 9 5 5

    return 0;
}