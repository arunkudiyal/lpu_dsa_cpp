// iostream is the header file or preprocessor for I/O of C++
#include<iostream>
// what namesapcae from the header file you want to use
// std :- cin >> ; cout << ; endl
using namespace std;
// create an entry point of the program - main()
int main() {
    // C :- printf() & scanf()
    // C++ :- cout << & cin >> 
    int a;
    cin >> a;
    cout << "Hey, user input is - " << a << endl;

    return 0;
}