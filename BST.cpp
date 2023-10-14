// Heap :- Max Heap, Min Heap
// Min Heap :- tree (complete tree) :- Insertion T-B - L-R [ first element = root; left; right; can not change level until the last level is not complete.]

// BST :- 
// Insertion :- check for every node and compare from the root:
// 0. if root = nil; the first key is the root
// 1. if key < root.value = LEFT Sub tree
// 2. if key > root.value = Right Sub tree

#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left; Node* right;
        Node(int data) {
            this->data = data;
            this->left = this->right = NULL;
        }
};

class BST {
    private:
        Node* root;                                                                     // ponter which holds to the Node memory 
        Node* insertNode(Node* root, int key) {
            if(root == NULL) root = new Node(key);
            else if(key < root->data) root->left = insertNode(root->left, key);
            else if(key > root->data) root->right = insertNode(root->right, key);
            return root;
        }

        // this->root = #ghgdx54;
        // Node* insertNode(NULL, 50);
        // 
        // Node* insertNode(#ghgdx54, 50);
        // Node* insertNode(NULL, 50);


        void inOrderT(Node* root) {
            if(root != NULL) {
                inOrderT(root->left);
                cout << root->data << " ";
                inOrderT(root->right);
            } 
        }
    public:         
        BST() {
            this->root = NULL;
        }
        void insert(int key) {
            this->root = insertNode(this->root, key);
        }
        void inOrder() {
            inOrderT(this->root);
            cout << endl;
        }
};

int main() {
    BST bst = BST();                                                                    // root = NULL
    //              50
    //      20              150
    // 10
    // N  N

    // stack = [ ]
    bst.insert(50);
    bst.insert(20);
    bst.insert(150);
    bst.insert(10);
    bst.insert(30);
    bst.inOrder();

    // output :- 10 20 

    return 0;
}
