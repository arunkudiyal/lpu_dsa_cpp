#include<iostream>
using namespace std;

class MinHeap {
    public:
        int* heap; int capacity; int size;
        MinHeap(int capacity) {
            this->capacity = capacity;
            heap = new int[capacity];
            this->size = 0;

            // If wanted, I can start my indexing from index 1.
            // this->size = 1;
            // this->heap[0] = INT_MIN; (min-heap)
        }

        int parent(int index) { return (index - 1) / 2; }

        int left(int index) { return (2 * index) + 1; }

        int right(int index) { return (2 * index) + 2; }

        void swap(int* x, int* y) {
            int temp = *x;
            *x = *y;
            *y = temp;
        }

        // T(n) = O(height) = O(log n)
        void insert(int key) {
            if(this->capacity == this->size) { cout << "Heap Storage Full."; return; }
            // inserting in the heap
            int pos = this->size;
            this->heap[pos] = key; 
            this->size += 1;
            // heapify the heap
            while(heap[parent(pos)] > heap[pos]) {
                swap(&heap[pos], &heap[parent(pos)]);
                pos = parent(pos);
            }
        }

        int peek() { 
            if(this->size <= 0) { cout << "Heap Empty!"; return -1; }
            return this->heap[0]; 
        }

        // a function which deletes the smallest-most elt from the min-heap
        // a function which deletes the largest-most elt from the max-heap
        void exatract() {
            if(this->size < 0) { cout << "Nothing to extract!"; return; }
            if(this->size == 1) { this->size -= 1; }
            // replaced the min-most value to the last-most value, & shrunk the array
            heap[0] = heap[this->size-1];
            this->size -= 1;
            // properties of the heap would be voilated, so we heapify.
            heapify(0);
        }

        // T(n) = O(n-1) = T(n)  
        void heapify(int index) {
            // take each node, and check if the subtree builds a heap or not.
            int left_index = left(index);
            int right_index = right(index);
            // check for the min-heap properties
            int smallest = index;
            if(left_index < this->size && this->heap[left_index] < this->heap[smallest]) {
                smallest = left_index;
            }
            if(left_index < this->size && this->heap[right_index] < this->heap[smallest]) {
                smallest = right_index;
            }
            // compare index with the smallest
            if(smallest != index) {
                swap(&this->heap[index], &this->heap[smallest]);
                heapify(smallest);
            }
        }

        void reduce(int index, int updated_value) {
            if(this->heap[index] > updated_value) {
                // heap.reduce(4, 12);
                this->heap[index] = updated_value;
                // check for the heap properties - bottom to top & maintain the heap if not
                while(index != 0 && heap[parent(index)] > heap[index]) {
                    swap(&heap[index], &heap[parent(index)]);
                    index = parent(index);
                }
            } else {
                cout << this->heap[index] << " is smaller than " << updated_value << endl;
                return;
            }
        }

        void display() {
            for(int i=0; i < this->size; i++) 
                cout << heap[i] << " ";
            cout << endl;
        }
};

int main() {
    MinHeap heap(15);
    heap.insert(10);
    heap.insert(10);
    heap.insert(10);
    heap.insert(10);
    heap.insert(10);
    // heap.insert(33);
    // heap.insert(31);
    // heap.insert(19);
    // heap.insert(42);
    // heap.insert(27);

    // int cap;
    // cin >> cap;
    // MinHeap heap2(cap);

    heap.display();                                                 // 10 14 19 26 31 42 27 44 35 33
    // 10 10 10 10 10

    // heap.exatract();
    // heap.display();                                                 // 14 19 26 31 42 27 44 35 33

    // heap.reduce(0, 10);
    // heap.display();                                                 // 10 19 26 31 42 27 44 35 33

    // heap.reduce(3, 18);
    // heap.display();                                                 // 10 18 26 19 42 27 44 35 33

    // heap.reduce(4, 43);                                             // Error Message
    // heap.display();                                                 // 10 18 26 19 42 27 44 35 33

    heap.exatract();
    heap.display();                                                     // 10 10 10 10

    return 0;
}