#include<iostream>
using namespace std;

int max_sum_subArray(int n, int arr[], int k) {
    // WRITE YOUR CODE...
}

int main() {
    int n;
    cin >> n;
    int nums[n];
    for(int i=0; i < n; i++)
        cin >> nums[i];
    int k;
    cin >> k;
    int maxSum = max_sum_subArray(n, nums, k);
    cout << maxSum << endl;

    return 0;
}