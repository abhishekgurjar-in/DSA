#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertIntoBST(Node* root, int data) {
    if (root == nullptr) {
        Node* newNode = new Node(data);
        return newNode;
    }
    if (data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }
    else {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

Node* minValue(Node* root){
    if(root==nullptr){
        return nullptr;
    }
    Node* temp=root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    if(root==nullptr){
        return nullptr;
    }
    Node* temp=root;
    while(temp->right !=nullptr){
        temp = temp->right;
    }
    return temp;
}

// Function to print the inorder traversal of the BST
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    int data[] = {5, 3, 8, 1, 4, 7, 9};

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        root = insertIntoBST(root, data[i]);
    }

    cout << "Inorder Traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;

    Node* minNode = minValue(root);
    Node* maxNode = maxValue(root);

    if (minNode != nullptr) {
        cout << "Minimum value in the BST: " << minNode->data << endl;
    }
    else {
        cout << "The BST is empty!" << endl;
    }

    if (maxNode != nullptr) {
        cout << "Maximum value in the BST: " << maxNode->data << endl;
    }
    else {
        cout << "The BST is empty!" << endl;
    }

    return 0;
}