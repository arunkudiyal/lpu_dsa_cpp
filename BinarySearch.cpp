#include<iostream>
using namespace std;

bool binarySearch(int n, int arr[], int search) {
    // Note:- If the data is not arranged, arrange accordingly.
    int start = 0; int end = n-1;
    while(start <= end) {
        int mid = (start + end) / 2;
        // If the mid value is the value you are searching
        if(arr[mid] == search) return true;
        // else if the search value is less --> Searching of the RIGHT (mid+1 - n)
        else if(arr[mid] < search) start = mid + 1;
        // else the search value is more --> Searching of the LEFT (0 - mid-1)
        else end = mid - 1;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++)
        cin >> arr[i];
    int search;
    cin >> search;
    // Note :- Expected for the data to be arranged (Asc. Order)
    bool found = binarySearch(n, arr, search);
    cout << found << endl;

    return 0;
}