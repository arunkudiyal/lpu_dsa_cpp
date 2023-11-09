#include<iostream>
#include<math.h>
#include<queue>
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
        // Order :- inOrder(LDR), preOrder(DLR), postOrder(LRD)
        // Note:- No order which starts from right and end at left
        // Q.1 :- Given an inOrder traversal, print the preOrder & postOrder | NOT POSSIBLE
        // Q.2 :- Given an preOrder traversal, print the inOrder & postOrder | POSSIBLE
        // Q.3 :- Given an postOrder traversal, print the preOrder & inOrder | POSSIBLE
        void inOrderTraversal(Node* root) {
            // inOrder traversal of any BST is in Ascending Order.
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
        int find_min(Node* root) {
            int minValue = root->data;
            while(root->left != NULL) {
                minValue = root->left->data;
                root = root->left;
            }
            return minValue;
        }
        int find_max(Node* root) {
            int maxValue = root->data;
            while(root->right != NULL) {
                maxValue = root->right->data;
                root = root->right;
            }
            return maxValue;
        }
        // deleteData(Node* root, int key);
        Node* deleteData(Node* root, int key) {
            // search for any value in the bst & then attempt to delete
            if(root == NULL) return NULL;
            else if(key < root->data) root->left = deleteData(root->left, key);
            else if(key > root->data) root->right = deleteData(root->right, key);
            // this block will be implemented when the data is found.
            else {
                // case 1 -> if root->left is NULL then root->right (NULL) is returned.
                // case 2 -> Node to be deleted has 1 child (L / R)
                if(root->left == NULL) return root->right;
                else if(root->right == NULL) return root->left;
                // case 3:- root->left != root->right != NULL
                else {
                    // max-most from the left or find the min-most from the right. [ in-Order traversal ]
                    // root->data = find_max(root->left);
                    root->data = find_min(root->right);
                    root->right = deleteData(root->right, root->data);
                }
            }
            return root;
        }
        int getHeight(Node* root) {
            if(root == NULL) return 0;
            else {
                int left_height = getHeight(root->left);
                int right_height = getHeight(root->right);
                return max(left_height, right_height) + 1;
            }
        }
        int getHeight2(Node* root) {
            // you no longer are allowed to use recursion. Use loops.
            if(root == NULL) return 0;
            // syntax :- queue<type> | queue<Node*>
            queue<Node*> q;
            // visit the BST for the first time
            q.push(root);
            int height = 0;
            // [1, 6, 14]
            while(!q.empty()) {
                int n = q.size();
                for(int i=0; i < n; i++) {
                    Node* temp = q.front();
                    if(temp->left != NULL) q.push(temp->left);
                    if(temp->right != NULL) q.push(temp->right);
                    // I have successfully visited the root
                    q.pop();
                }
                height+=1;
            } 
            return height;
        }
        void levelOrderTraversal(Node* root) {
            if(root == NULL) return;
            queue<Node*> q;
            q.push(root);
            while(!q.empty()) {
                int n = q.size();
                for(int i=0; i < n; i++) {
                    Node* temp = q.front();
                    cout << temp->data << " ";
                    if(temp->left != NULL) q.push(temp->left);
                    if(temp->right != NULL) q.push(temp->right);
                    // I have successfully visited the root
                    q.pop();
                }
            }
            cout << endl;
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
        void del(int key) {
            this->root = deleteData(this->root, key);
        }
        int height() { return getHeight(this->root); }
        int height2() { return getHeight2(this->root); }
        void levelOrder() { levelOrderTraversal(this->root); }
        int getLevels() { return getHeight(this->root) - 1; }
};

int main() {
    BinarySearchTree bst = BinarySearchTree();              // root = NULL
    // bst.insert(4);
    // bst.insert(7);
    // bst.insert(10);
    // bst.insert(13);
    // bst.insert(5);
    // bst.insert(39);
    // bst.insert(0);
    // bst.insert(67);
    // bst.insert(69);
    // bst.insert(91);
    // bst.inOrder();                              // 0 4 5 7 10 13 39 67 69 91

    // cout << bst.height() << endl;               // 8    |    0   |     
    // cout << bst.height2() << endl;              // 8   

    // bst.reverseInOrder();

    // bst.del(4);
    // bst.inOrder();                              // 0 5 7 10 13 39 67 69 91

    // bst.del(13);
    // bst.inOrder();                              // 0 5 7 10 39 67 69 91

    // bst.del(69);
    // bst.inOrder();                              // 0 5 7 10 39 67 91

    // bst.del(100);
    // bst.inOrder();                              // 0 5 7 10 39 67 91

    // bst.levelOrder();

    bst.insert(100);
    bst.insert(90);
    bst.insert(80);
    bst.insert(70);
    bst.insert(60);
    bst.inOrder();                                  // 100 100 100 100 100

    return 0; 
}