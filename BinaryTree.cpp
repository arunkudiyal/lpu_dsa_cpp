// Binary Tree -
// A tree with max of two children.

// 1. Root :- First Node of the BT.
// 2. Children :- Two Children - Left & Right

// Node of Tree -
// 1. data :- type? - any primitive value
// 2. children :- left & right

#include<iostream>
using namespace std;
// Way - 1 - Using structures
// struct TreeNode {
//     int data;
//     TreeNode* left; TreeNode* right;
// };

// Way - 2 - Using class
class TreeNode {
    public:
        int data;
        TreeNode* left; TreeNode* right;
        TreeNode(int key) {
            this->data = key;
            this->left = this->right = NULL;
        }
};
// Example0
//          0
// Example1
//          5
//      1       2
// Example2
//          5
//      2          
//  1
// Example3
//          5
//              1         
//                  2
class BinaryTree {
    public:
        TreeNode* root;     // 3 things = root, root->left, root-> right;
        BinaryTree() {
            this->root = NULL;
        } 
        void postOrderTraversal(TreeNode* root) {
            // inOrder traversal of any BST is in Ascending Order.
            if(root != NULL) {
                postOrderTraversal(root->left);           // L
                postOrderTraversal(root->right);          // R
                cout << root->data << " ";                // D
            }
        }
};

// Problem - BST - 
// Sequence for insertion (root < key --> append to LEFT | root > key --> append to RIGHT)
int main() {
    // Building the Binary Tree
    BinaryTree bt = BinaryTree();
    bt.root = new TreeNode(1);
    bt.root->left = new TreeNode(3);
    bt.root->right = new TreeNode(4);
    bt.root->left->left = new TreeNode(5);
    bt.root->left->right = new TreeNode(2);
    bt.postOrderTraversal(bt.root);           // 1 5 2
    cout<< endl;
    return 0;
}