#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* createTree() {
    int data;
    cout << "Enter the value (or -1 for NULL): ";
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);

    cout << "Enter left child of " << data << ":" << endl;
    root->left = createTree();

    cout << "Enter right child of " << data << ":" << endl;
    root->right = createTree();

    return root;
}

void printTree(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    Node* root = createTree();
    cout << "Binary Tree:" << endl;
    printTree(root);
    cout << endl;
    return 0;
}
