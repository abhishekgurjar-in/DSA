#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void printLeftBoundary(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        return;
    }
    cout << root->data << " ";

    if (root->left != NULL) {
        printLeftBoundary(root->left);
    } else if (root->right != NULL) {
        printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
        return;
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        return;
    }
    if (root->right != NULL) {
        printRightBoundary(root->right);
    } else if (root->left != NULL) {
        printRightBoundary(root->left);
    }
    cout << root->data << " ";
}

void boundaryTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << "Boundary Traversal: ";
    cout << root->data << " ";
    printLeftBoundary(root->left);
    printLeafBoundary(root);
    printRightBoundary(root->right);
    cout << endl;
}

// Utility function to create a new node
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    // Creating a binary tree
    Node* root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right->right = newNode(25);

    boundaryTraversal(root);

    return 0;
}
