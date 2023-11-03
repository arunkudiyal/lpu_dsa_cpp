// Tower of Hanoi
// place all the discs from Road A to Rod C with aux rod as Rod B.


// n -> No. of discs
// n = 1
// Move disc from A to C
// n = 1 | No of Steps - 1 | (2^n - 1)

// n = 2
// Move disc from A to B
// Move disc from A to C
// Move disc from B to C
// n = 2 | No of Steps - 3 | (2^n - 1)

// n = 3
// Move disc from A to B
// Move disc from A to C
// Move disc from B to C -> (B is empty Rod)
// Move disc from A to B -> (A is empty rod)
// Move disc from C to B -> Smallest - B, Largest -> B, Second Largest - C
// Move disc from C to A -> (C is empty)
// Move disc from B to A -> Smallest - A, Largest -> B, Second Largest - A
// Move disc from B to C
// Move disc from A to B
// Move disc from A to C
// Move disc from B to C

// n = 3
// Move disc from A to C - Smallest is at C
// Move disc from A to B - Smallest - C, Largest - A, Second Largest - B
// Move disc from C to B - (C is empty)
// Move disc from A to C - Smallest, Second Largest - B, Largest - C (A is empty)
// Move disc from B to A
// Move disc from B to C
// Move disc from A to C
// n = 3 | No of Steps - 7 | (2^n - 1) 

// n = 4 | No of Steps - 15


// 3 positions -> source (A), Auxilary (B), Destination (C) 

// T(n) = O(2^n)
#include<iostream>
using namespace std;

void TOH(int n, char source, char aux, char dest) {
    if(n == 1) {
        cout << "Move disc from " << source << " to " << dest << endl;
        return;
    }
    // Step 1 :- Take all the discs from source (A) and place to auxilary (B) | A-> Source; B-> Destination; C-> Aux
    TOH(n-1, source, dest, aux);
    // Step 2 :- Every call to step1, print the traversal
    cout << "Move disc from " << source << " to " << dest << endl;
    // Step 3 :- Take all the discs from aux(B) and place them to dest (C) | A:- Aux; B-> Source; C-> Destination
    TOH(n-1, aux, source, dest);
}

int main() {
    int n;
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}