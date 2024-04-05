#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void printRightView(Node* root, int level, vector<int>& rightView) {
    if (root == NULL) {
        return;
    }
    if (level == rightView.size()) {
        rightView.push_back(root->data);
    }
    printRightView(root->right, level + 1, rightView);
    printRightView(root->left, level + 1, rightView);
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

    vector<int> rightView;
    printRightView(root, 0, rightView);

    cout << "Right view of the binary tree is: ";
    for (int i = 0; i < rightView.size(); i++) {
        cout << rightView[i] << " ";
    }
    cout << endl;

    return 0;
}
