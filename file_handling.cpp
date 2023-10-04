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
    // Q:- I want to write the content in the file but at a specific position
    // read the values from a specific point(index)
    ifstream if_in("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt", ios::in );

    // Q:- Generate an error if you are unable to open the file.
    // Note- If opening any file is unsuccessful, the ref is not created
    if(!if_in.is_open()) {
        // cout << "Error Opening file" << endl;
        // creating a 
        cerr << "Error Opening file" << endl;
    } else {
        string data;
        // define a position where I'll start reading the content
        int position;
        cin >> position;
        // moves the reading pointer to the specified value; default = 0
        if_in.seekg(position);
        getline(if_in, data);
        cout << data << endl;
    }

    // Research :- Start reading from a pos + end reading to a specifc pos 

    return 0;
}