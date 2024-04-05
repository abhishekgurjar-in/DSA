#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void printLeftView(Node* root, int level, vector<int>& leftView) {
    if (root == NULL) {
        return;
    }
    if (level == leftView.size()) {
        leftView.push_back(root->data);
    }
    printLeftView(root->left, level + 1, leftView);
    printLeftView(root->right, level + 1, leftView);
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
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    vector<int> leftView;
    printLeftView(root, 0, leftView);

    cout << "Left view of the binary tree is: ";
    for (int i = 0; i < leftView.size(); i++) {
        cout << leftView[i] << " ";
    }
    cout << endl;

    return 0;
}
