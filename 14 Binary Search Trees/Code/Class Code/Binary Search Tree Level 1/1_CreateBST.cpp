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

void createBST(Node* &root) {
    cout << "Enter Data: " << endl;
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
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

    return 0;
}