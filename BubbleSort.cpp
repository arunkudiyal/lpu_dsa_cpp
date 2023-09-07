#include<iostream>
using namespace std;

void bubbleSort(int n, int arr[]) {
    for(int i=0 ; i < n; i++) {
        for(int j=1; j < (n-i); j++) {
            if(arr[j-1] > arr[j]) {
                // swap(arr[j-1], arr[j])
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int n, int arr[]) {
    for(int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++)
        cin >> arr[i];
    printArray(n, arr);
    bubbleSort(n, arr);
    printArray(n, arr);

    return 0;
}