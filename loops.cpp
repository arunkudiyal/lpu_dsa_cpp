#include<iostream>
using namespace std;

int main() {
    // loops :- for, while, do-while
    // starting-point ; end-point (condition) ; inc/dec.

    // 1. for-loop  // ENTRY-CONTROLLED LOOP
    // Q:- If I have to create an infinte for-loop...? 
    // for(;;) {  }

    // for(start; end-point; inc/dec)
    // int i = 1;
    // for(i=1; i <= 5; i++) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << "Last updated value for post-inc is : " << i << endl;

    // int j = 0;
    // for(j=0; j < 5; ++j) {
    //     cout << j << " ";
    // }
    // cout << endl;
    // cout << "Last updated value for pre-inc is : " << j << endl;

    // int a = 10;
    // int b = 21;
    // cout << a++ + ++b << endl;          // 10 + 22 = 32
    // cout << a << " " << b << endl;      // 11 22

    // for(int i=2; i < 21; i=i+2)          // i :- 1 - 20
    //     cout << i << " ";
    // cout << endl;

    // 2 x 1 = 2 // 2           //  1 x 2 = 2
    // 2 x 2 = 4 // 4           //  2 x 2 = 4
    // 2 x 3 = 6 // 6           //  3 x 2 = 6
    // ...       // ..          //  ...

    // Table of 2 - [2 - 20] -> [2 x 1 = 2; 2 x 10 = 20]
    // i = 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22
    // int i = 2;
    // for(i=2; i <= 20; i+=2) {
    //     cout << 2 << " x " << i/2 << " = " << i << endl; 
    // }
    // cout << i << endl;

    // // i = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
    // int j = 1;
    // for(j=1; j <= 10; j+=1) {
    //     cout << 3 << " x " << i << " = " << (3 * i) << endl;
    // }
    // cout << j << endl;                                      // 11


    // 2. while-loop // ENTRY-CONTROLLED LOOP
    
    // initial_declaration
    // while(condition) { ...  }
    // int n;                                  // n = 5
    // cin >> n;
    // int i = n;
    // while(i != n*11) {
    //     // i = 5 10 15
    //     cout << n << " x " << i/n << " = " << i << endl;
    //     // i = 10 15 20 ... 55                
    //     i = i + n;                          
    // }

    // Q:- keep asking for a value from the user, until he does not input 0.
    // int n = 1;
    // while(n != 0) {
    //     cin >> n;
    // }

    // int n;
    // for(int i=0 ; i < INT_MAX; i++) {
    //     cin >> n;
    //     if(n == 0) break;
    //     continue;
    // }

    // 3. do-while -> EXIT-CONTROL LOOP
    // int n = 0;
    // while(n != 0) {
    //     cin >> n;
    // }

    // do {
    //     cin >> n;
    // } while(n != 0);


    // 4. foreach loop -> ONLY USED IN ARRAYS
    // int n;
    // cin >> n;
    // int myArr[n];
    // for(int i=0; i < n; i++)
    //     cin >> myArr[i];
    // for(int i=0; i < n; i++)
    //     cout << myArr[i] << " ";
    // cout << endl;

    // int arr1[] = {10, 20, 30, 40, 50};
    // for(int x: arr1)
    //     cout << x << " ";
    // cout << endl;

    return 0;
}