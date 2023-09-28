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

class BinarySearchTree {
    private:
    Node* root;
        // insertData(this->root, 100);
        Node* insertData(Node* root, int key) {
            if(root == NULL) root = new Node(key);
            else if(key < root->data) root->left = insertData(root->left, key);
            else if(key > root->data) root->right = insertData(root->right, key);
            return root;
        }
        void inOrderTraversal(Node* root) {
            if(root != NULL) {
                inOrderTraversal(root->left);           // L
                cout << root->data << " ";              // D
                inOrderTraversal(root->right);          // R
            }
        }
        void reverseInOrderTraversal(Node* root) {
            if(root != NULL) {
                reverseInOrderTraversal(root->right);   // R
                cout << root->data << " ";              // D
                reverseInOrderTraversal(root->left);    // L
            }
        }
    public:
        BinarySearchTree() {
            this->root = NULL;
        }
        // encapsulated code
        void insert(int key) {
            this->root = insertData(this->root, key);
        }
        void inOrder() {
            inOrderTraversal(this->root);
            cout << endl;
        }
        void reverseInOrder() {
            reverseInOrderTraversal(this->root);
            cout << endl;
        }
};

int main() {
    BinarySearchTree bst = BinarySearchTree();              // root = NULL
    bst.insert(4);
    bst.insert(7);
    bst.insert(10);
    bst.insert(13);
    bst.insert(5);
    bst.insert(39);
    bst.insert(0);
    bst.insert(67);
    bst.insert(69);
    bst.insert(91);
    bst.inOrder();                              // 0 4 5 7 10 13 39 67 69 91
    bst.reverseInOrder();

    return 0;
}