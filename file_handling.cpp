#include<iostream>
// Step 1- Import the fstream library for opeartions on the file
// fstream :- creating a file, writing in the file & reading the files
#include<fstream>
// fstream = ifstram + ofstream
using namespace std;

int main() {

    // i. READ MODE in fstream

    // Step 2- create a ref of ifstream(is a part of fstream).
    // fstream f_out;
    // string line;
    
    // NOTE:- Any operation you do, you have to perform 2 operations for completing the task
    // a. Open the File.
    // b. Perform the operation in the file (read, write, append, binary, ...)
    // c. Close the File

    // Step 3- open() helps you open the file.
    // f_in.open("absolute path of the file");
    // .open(string location)
    // f_in.open("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/example.txt");

    // // Step 4- specify the operation to do in the file. -> Specify the Mode
    // // loop which is work till the end of the file
    // // getline() -> which will help you read content line by line 
    // // & store the value of the line in a seperate variable.
    // int count = 0;
    // while( getline(f_in, line) ) {
    //     cout << line << endl;                        // priniting line-by-line
    //     count += 1;
    // }
    // cout << count << endl;                          // 2
    // // Step 5- Close the file. | The location passed in the open method is now removed.
    // f_in.close();


    // ii. WRITE MODE in fstream

    // f_out.open("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt", ios::out);
    
    // // Write the content in the file.
    // while( f_out ) {
    //     getline(cin, line);
    //     if(line == "-1") break;
    //     cout << line << endl;
    //     // write the line content in the file. 
    //     f_out << line << endl;
    // }

    // f_out.close();


    // SEQUENTIAL PROCESSING IN THE FILE.
    // char name[255];
    // cin >> name;                        // We will not put " "
    // char input[100];

    // // write the name sequentially using ofstream class
    // // ofstream instance_name("location_of_file");

    // // NOTE:- No need to specify the mode; the default mode is 'open' 
    // // You donot need to open the file instead just write & close the file.
    // // ofstream f_out("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt");
    // // // write the content in the file
    // // f_out << name;
    // // // close the file.
    // // f_out.close(); 

    // // reading the name sequentially using ifstream class
    // ifstream f_in("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt");
    // f_in >> input;
    // cout << input << endl;              // This



    // Random Access File Processing
    // read the values from a specific point(index)
    // ifstream if_in("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt", ios::in );

    // // Q:- Generate an error if you are unable to open the file.
    // // Note- If opening any file is unsuccessful, the ref is not created
    // if(!if_in.is_open()) {
    //     // cout << "Error Opening file" << endl;
    //     // creating a 
    //     cerr << "Error Opening file" << endl;
    // } else {
    //     string data = "";
    //     // define a position where I'll start reading the content
    //     int position1;
    //     int position2;
    //     cin >> position1;
    //     cin >> position2;
    //     if(position2 > position1) {
    //         int count = 0;
    //         while(count != position2 - position1) {
    //             // data += '';
    //             if_in.seekg(position1 + 1);
    //             // getline(if_in, data);
    //             cout << data << endl;
    //         }
    //     } else {
    //         cout << "Incompatible values of position1 & position2" << endl;
    //     }
        
    // }

    // Research :- Start reading from a pos + end reading to a specifc pos 
    // ifstream if_in("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt", ios::in );
    // if(!if_in.is_open()) {
    //     cerr << "Error opening file!" << endl;
    // } else {
    //     int pos1; int pos2;
    //     cin >> pos1;
    //     cin >> pos2;
    //     // reading pointer now starts from pos1
    //     if_in.seekg(pos1);
    //     int lengthOfContent = pos2 - pos1;
    //     if(pos2 > pos1) {
    //         // if the positions are valid, I will read the content.
    //         char* contentRead = new char[lengthOfContent];
    //         // .read(pointerToArrayOfString, lengthOfTheContentToRead) 
    //         if_in.read(contentRead, lengthOfContent);
    //         cout << contentRead << endl;
    //     } else {
    //         cout << "Invalid position values!";
    //     }
    // }

    // Q2:- I wanted to read the entire content of the file using .read()
    // Alternative - 1 :- use while() with getLine()
    // ifstream if_in("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt", ios::in );
    // if(!if_in.is_open()) {
    //     cerr << "Error opening file!" << endl;
    // } else {
    //     // seekg(position:int) :- places the pointer at the position
    //     // seekg(offset, referenceOfReading) :-
    //     // offset :- no of charachters or bytes to move in the file.
    //     // reference :- beg, end, curr
    //     if_in.seekg(0, ios::end);               // pointer :- 1
    //     // get the length of the entire content [start = 0]
    //     streampos fileSize = if_in.tellg();
    //     if_in.seekg(0, ios::beg);
    //     cout << fileSize << endl;

    //     char* contentRead = new char[fileSize];
    //     if_in.read(contentRead, fileSize);
    //     cout << contentRead << endl;
    // }

    // ifstream if_in("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt", ios::in );
    // if(!if_in.is_open()) {
    //     cerr << "return" << endl;
    // } else {
    //     if_in.seekg(10, ios::beg);
    //     // current reading pointer :- 10th index
    //     char ch;
    //     while(if_in.get(ch)) {
    //         cout << ch;
    //     }
    // }

    // seekp() (offstream for writing) <--> seekg() (ifstream for reading)
    ofstream of_out("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt", ios::app);
    if(!of_out.is_open()) {
        cerr << "Error opening the file" << endl;
    } else {
        of_out.seekp(0, ios::end);
        of_out << "Start of the file\n";
        of_out.close();
    }

    // AGENDA :- appenending and writing the middle and the start.

    return 0;
}