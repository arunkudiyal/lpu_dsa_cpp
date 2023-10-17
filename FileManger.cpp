#include<iostream>
#include<fstream>
using namespace std;

class FileManager {
    private:
        ofstream myFile;
    public:
        // constructor - default constrcutor
        FileManager() {
            const string myFileLoc = "/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document2.txt";
            myFile.open(myFileLoc);
            if(myFile.is_open()) {
                // print a message saying the obj is created
                cout << "File is open. Object created successfully!" << endl;
            }
        }
        // constructor - parametrised constrcutor
        FileManager(const string& location) {
            myFile.open(location);
            if(myFile.is_open()) {
                // print a message saying the obj is created
                cout << "File is open. Object created successfully!" << endl;
            }
        }
        ~FileManager() {
            myFile.close();
            cout << "File closed succesfully!" << endl;
        }
        void write(const string& contentToWrite) {
            if(myFile.is_open()) {
                myFile << contentToWrite << endl;
            } else {
                cout << "Error opening the file." << endl;
            }
        }
};

// Q:- What is the diff b/w procedural programming & OOP
int main() {
    // Read / Write in and out of the file, all I need to do is create an object of FileManger class - open, closing, reading, writing.
    // constructor which takes the address of the file to open.
    FileManager myFileManager("/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt");
    // FileManager myFileManager2; --> Default Constructor
    myFileManager.write("This is a new content to write.");
}