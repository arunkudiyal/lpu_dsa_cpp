#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Add some string content in at a specified index of the existing file content.
int main() {
    string originalFilePath = "/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt";
    string tempFilePath = "/Users/arunkudiyal/Desktop/lpu_dsa_cpp/temp.txt";

    ifstream originalFile(originalFilePath);
    ofstream tempFile(tempFilePath);

    if(!originalFile.is_open() || !tempFile.is_open()) {
        cout << "Error opening File";
    } else {
        int index;
        cin >> index;
        string line = "";
        string updatedFileContent = "";

        // change the file content
        string contentToUpdate;
        int lineNoToUpdate;
        cin >> lineNoToUpdate;
        int lineNumber = 1;
        getline(cin.ignore(), contentToUpdate);

        while( getline(originalFile, line) && lineNoToUpdate == lineNumber ) {
            if(index <= line.length()) {
                line.insert(index, contentToUpdate);
                lineNumber += 1;
            }
            break;
        }
        
        // copy paste the remaing content
        while(getline(originalFile, line)) tempFile << line << endl;

        originalFile.close();
        tempFile.close();
    }

    return 0;
}

// Add some string content in at a middle of the existing file content.
// int main() {
//     string originalFilePath = "/Users/arunkudiyal/Desktop/lpu_dsa_cpp/document.txt";
//     string tempFilePath = "/Users/arunkudiyal/Desktop/lpu_dsa_cpp/temp.txt";

//     ifstream originalFile(originalFilePath);
//     ofstream tempFile(tempFilePath);

//     if(!originalFile.is_open() || !tempFile.is_open()) {
//         cout << "Error opening File";
//     } else {
//         // streampos fileSize = originalFile.tellg();
//         int lineCount = 1;
//         int lineNumber;
//         cin >> lineNumber;
//         string line = "";
//         while( getline(originalFile, line) && lineNumber > lineCount ) {
//             tempFile << line << endl;
//             lineCount += 1;
//         }
//         // change the file content
//         string contentToUpdate;
//         getline(cin.ignore(255, -1), contentToUpdate);
//         cout << contentToUpdate;
//         tempFile << contentToUpdate << endl;
//         // copy paste the remaing content
//         while(getline(originalFile, line)) tempFile << line << endl;

//         originalFile.close();
//         tempFile.close();
//     }

//     return 0;
// }