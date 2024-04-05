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

void preOrderTraversal(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";

    preOrderTraversal(root->left);

    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root) {
    if (root == nullptr) return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
    if (root == nullptr) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
