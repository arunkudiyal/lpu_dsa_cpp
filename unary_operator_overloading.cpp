#include<iostream>
using namespace std;

class Number {
    private:
        int num1;
        float num2;
    public:
        Number(int num1, float num2) {
            this->num1 = num1;
            this->num2 = num2;
        }
        // overload pre-increment | return_type operator op();
        Number operator++() {
            int temp = this->num1 + 1;
            return Number(temp, this->num2);
        }
        // overload post-increment | return_type operator op(int);
        Number operator++(int) {
            int temp1 = this->num1 + 1;
            float temp2 = this->num2 + 1;
            return Number(temp1, temp2);
        }
        Number operator--(int) {
            return Number(5, 6.0);
        }
        void display() {
            cout << "(" << num1 << ", " << num2 << ")" << endl;
        }
};

int main() {
    // Unary Operator
    // x++, ++x, --x, x==
    Number num1(10, 3.14);
    num1.display();                                                         // (10, 3.14)

    Number newNumber1 = ++num1;                                             // (11, 3.14)
    cout << "Pre Increment : "; newNumber1.display();
    
    Number newNumber2 = num1++;
    cout << "Post Increment : "; newNumber2.display();                      // (11, 4.14)

    // --num1;

    return 0;
}