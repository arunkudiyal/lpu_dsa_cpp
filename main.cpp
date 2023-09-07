// iostream is the header file or preprocessor for I/O of C++
#include<iostream>
#include<string>
// what namesapcae from the header file you want to use
// std :- cin >> ; cout << ; endl
using namespace std;
// create an entry point of the program - main()
int main() {
    // C :- printf() & scanf()
    // C++ :- cout << & cin >> 
    // int a;
    // cin >> a;
    // cout << "Hey, user input is - " << a << endl;

    // data types in cpp
    // 1. int -> 32bit signed integer | 4 bytes
    // int x;                                              // No memory is assigned to the variable
    // x = 100;                                            // Memory allocation begins

    // cout << x << endl;
    // sizeof() -> memory size of a passed data type
    // cout << sizeof(int) << endl;                        // 4 bytes

    // 2. charachter - -128 to + 127
    // char ch = 'a';
    // cout << ch << endl;
    // char ch2 = 100;                                     // ASCII code of the char
    // cout << ch2 << endl;
    // cout << sizeof(char) << endl;                       // 1 byte

    // 3. boolean -> True / False
    // bool m = 0;         // false
    // bool n = 1;         // true
    // bool z = 10;
    // bool v = -8;
    // bool b = -10000;
    // cout << m << " " << n << " " << z << " " << v << " " << b << endl;
    // cout << sizeof(bool) << endl;                    // 1 byte

    // bool m = true;
    // bool n = false;
    // cout << m  << " " << n << endl;

    // 4. float -> non-real numbers -> decimal point
    // float myFloat = 3.145678937489392729473892;         // 6 precision value
    // cout << myFloat << endl;
    // cout << sizeof(myFloat) << endl;                    // 4 byte

    // 5. wide charachter (wchar_t) :- Charcter pool
    // wchar_t w = L'a';                                   // ASCII value
    // wchar_t p[] = L"Arun Kudiyal";
    // cout << "ASCII code is " << w << endl;
    // cout << sizeof(w) << endl;


    // DATATYPE MODIFIERS
    // 1. signed
    // 2. unsigned
    // 3. short
    // 4. long
    // 5. double

    // create a integer which takes 2 bytes of space
    // short int num1 = 32767;                             // -32768 to +32767
    // cout << sizeof(num1) << endl;                       // 2 bytes

    // unsigned short int num2 = 32768;                     // +65534
    // cout << sizeof(num2) <<  endl;

    // long int num3 = 467583;
    // cout << sizeof(num3) << endl;                       // 8 bytes -> (doubled)

    // double num4 = 738827284;
    // cout << sizeof(num4) << endl;                       // 8 bytes

    // // double num5 = 45.6726281719;
    // cout << sizeof(num4) << endl;
    // cout << num4 << endl;


    // DERIVED DATA TYPE
    // 1. string object | NOT A PDT
    // string str;                                             // 24 bytes
    // cin >> str;                                             // delimiter :- space, enter
    // cout << str << endl;
    // string str2 = "Hello World";
    // cout << sizeof(string) << endl;
    // cout << sizeof(str2) << endl;
    // cout << str2 << endl;

    // Q:- Why we say string to be not a PDT but an object?
    // string str;                                             // c++ treats string as an object
    // getline(cin, str);                                      // delimiter :- enter
    // cout << str << endl;

    // Access methods from the string class
    // 1. on run-time, you can expand the value of a string -> push_back(char)
    // ->  push_back(char) :- appends a character to the string
    // str.push_back('W');
    // cout << str << endl;

    // 2. on run-time, you can shrink the value of a string -> pop_back()
    // -> pop_back() :- remove the last charachter from the string
    // str.pop_back();
    // cout << str <<  endl;

    // object syntax of the string
    // string s1("One");
    // string s2("Two");

    // Different ways of concatening strings
    // Way - 1 :- using '+'
    // string s3 = s1 + s2;
    // cout << s3 << endl; 

    // s1.append(s2);
    // cout << s1 << endl;
    // cout << s2 << endl;

    // strcmp & strcat -> string header file -- [HOLD]

    // capacity() - bytes allocated to store the string; capacity() < sizeof() < capacity()
    // cout << s1.capacity() << endl;                             
    // // new string of the no of charac as specified
    // // s1.resize(2);
    // cout << s1 << endl;
    // // total no of charac in a given string -> " " is counted as 1
    // cout << s1.length() << endl;

    // // copy() - [HOLD] - CharSquence
    // // swap()
    // cout << s1 << " " << s2 << endl;
    // s1.swap(s2);
    // cout << s1 << " " << s2 << endl;


    // 2. Arrays in C++
    // Array is a collection of similar type of DTs.
    // A complex variable is capable to storing multiple values in a single variable.
    // dataType variableName = variableValue;

    // Syntax_1 :- dataType arrayName[size];
    // int num[5];                                     // index - 0, 1, 2, 3, 4
    // // indices :- start = 0; end = size - 1

    // // access the values from the array
    // // arrayName[index] = value
    // num[0] = 100;
    // num[1] = 200;
    // num[2] = 300;
    // num[3] = 400;
    // num[4] = 500;

    // cout << num[0] << " " << num[1] << " " <<  num[2] << " " << num[3] << " " << num[4] << endl;

    // cout << num << endl;                            // 0x16dacb2e4 (address)

    // // If you donot have an idea on the size, you had hard-code the values
    // string arr2[] = {"This", "is", "a", "string"};
    // cout << arr2[0] << " -> " << arr2[1] << " -> " <<  arr2[2] << " -> " << arr2[3] << endl;

    // // size of the array
    // cout << "The size of the array - " << sizeof(num) << endl;          // 20 -> 5 * sizeof(DT)
    // cout << "The size of the array - " << sizeof(arr2) << endl;         // 24 * 4 = 96

    // // Intersted to find the size of the array
    // cout << "No of elements in num array - " << sizeof(num) / sizeof(int) << endl; 
    // cout << "No of elements in arr2 array - " << sizeof(arr2) / sizeof(string) << endl; 

    // return 0;
}