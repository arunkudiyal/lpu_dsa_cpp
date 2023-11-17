#include<iostream>
using namespace std;

float divide(float a, float b) { 
    float div;
    // custom exception
    if(b == 0) {
        throw runtime_error("Divided by zero");
    } 
    div = a / b;
    return div;
}

int main() {
    try {
        float a; float b;
        cin >> a; cin >> b;
        float div = divide(a, b);
        cout <<  div << endl;
    } catch(const exception& e) {
        cout << e.what() << endl;
    }
}