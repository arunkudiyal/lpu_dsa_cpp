// Problem Statement
// noOfRows = x; noOfCols = y;
// No of ways to travel the grid if the travelling direction possible is either right or down

#include<iostream>
using namespace std;

int gridTraveller(int m, int n, int& memoTable[][]) {
    // chcek if my value is there in the memo or not
    // if it is return ....

    if(m == 0 || n == 0) return 0;
    else if(m == 1 && n == 1) return 1;
    // iterate to right(m, n-1) + iterate to bottom(m-1, n)

    // else calculate, store in the table.
    return *memoTable[m][n] = gridTraveller(m-1, n, memoTable) + gridTraveller(m, n-1, memoTable);
}

int main() {
    int m, n;
    cin >> n;
    cin >> m;
    int memoTable[m+1][n+1];
    for(int i=0; i < m+1; i++) memoTable[i][0] = 0;
    for(int i=0; i < n+1; i++) memoTable[0][i] = 0;
    memoTable[1][1] = 1;
    cout << gridTraveller(m, n, &memoTable) << endl;

    return 0;
}