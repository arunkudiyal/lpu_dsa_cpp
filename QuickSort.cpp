#include<iostream>
using namespace std;

void printArray(int n, int arr[]) {
    for(int i=0 ; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++)
        cin >> arr[i];
    printArray(n, arr);                 // print before sorting
    quickSort();                        // sort the array
    printArray(n, arr);                 // print after sorting

    return 0;
}