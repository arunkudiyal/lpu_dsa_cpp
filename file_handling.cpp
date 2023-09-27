#include<iostream>
// Step 1- Import the fstream library for opeartions on the file
// fstream :- creating a file, writing in the file & reading the files
#include<fstream>
// fstream = ifstram + ofstream
using namespace std;

int main() {
    // i. Read mode in fstream
    // Step 2- create a ref of ifstream(is a part of fstream).
    ifstream f_in;
    string line;
    
    // NOTE:- Any operation you do, you have to perform 2 operations for completing the task
    // a. Open the File.
    // b. Perform the operation in the file (read, write, append, binary, ...)
    // c. Close the File

    // Step 3- open() helps you open the file.
    // f_in.open("absolute path of the file");
    f_in.open("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/example.txt");

    // Step 4- specify the operation to do in the file. -> Specify the Mode
    // loop which is work till the end of the file
    // getline() -> which will help you read content line by line 
    // & store the value of the line in a seperate variable.
    while( getline(f_in, line) ) {
        cout << line << endl;
    }

    // Step 5- Close the file.
    f_in.close();

    return 0;
}