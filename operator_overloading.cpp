#include<iostream>
#include<cmath>
using namespace std;

// Complex Numbers -> a + ib
class ComplexNumber {
    private:
        double real;
        double imaginary;
    public:
        // creating a complex numbers
        ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

        void display() {
            if(imaginary < 0) cout << real << " - " << abs(imaginary) << "i" << endl; 
            else cout << real << " + " << imaginary << "i" << endl;
        }

        // handling operatins on the complex numbers - +, -, *, /
        // OPERATOR OVERLOADING
        ComplexNumber operator+(const ComplexNumber& num2) {
            return ComplexNumber(this->real + num2.real, this->imaginary + num2.imaginary);
        }
        ComplexNumber operator-(const ComplexNumber& num2) {
            return ComplexNumber(this->real - num2.real, this->imaginary - num2.imaginary);
        }
        ComplexNumber operator*(const ComplexNumber& num2) {
            return ComplexNumber( (this->real * num2.real) - (this->imaginary * num2.imaginary), (this->real * num2.imaginary) + (this->imaginary * num2.real) );
        }
        // ComplexNumber operator/(const ComplexNumber& num2) {
        //     double denominator = num2.real * num2.real + num2.imaginary + num2.imaginary;
        //     double realPart = (this->real * num2.real + this->imaginary * num2.imaginary) / denominator;

        // }
};

int main() {
    // string str1("Hello World")
    // string str2("Bye")
    // string sum = str1 + str2;
    ComplexNumber num1(3, 2);                   
    ComplexNumber num2(2, -3);                  

    // sum of the two complex numbers           
    ComplexNumber sum = num1 + num2;

    // difference of the two complex numbers
    ComplexNumber differnce = num1 - num2;

    // product of the two complex numbers
    ComplexNumber product = num1 * num2;

    num1.display();                             // 3+2i
    num2.display();                             // 2-3i  
    sum.display();                              // 5-1i
    differnce.display();                        // 1 - 5i
    product.display();                          // 12 - 5i

    return 0;
}