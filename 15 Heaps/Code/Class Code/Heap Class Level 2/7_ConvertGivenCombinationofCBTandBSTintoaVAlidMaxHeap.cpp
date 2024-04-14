#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void storeInorderTraversal(Node* root, vector<int>& in) {
    if (root == nullptr) {
        return;
    }
    storeInorderTraversal(root->left, in);
    in.push_back(root->data);
    storeInorderTraversal(root->right, in);
}

void replaceWithPostOrder(Node* root, const vector<int>& in, int& index) {
    if (root == nullptr) {
        return;
    }
    replaceWithPostOrder(root->left, in, index);
    replaceWithPostOrder(root->right, in, index);
    root->data = in[index];
    index++;
}

Node* convertBSTIntoMaxHeap(Node* root) {
    vector<int> inorder;
    storeInorderTraversal(root, inorder);

    int index = 0;
    replaceWithPostOrder(root, inorder, index);
    return root;
}

void printInorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    // Create a sample Binary Search Tree (BST)
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    cout << "Inorder traversal of BST before conversion to Max Heap: ";
    printInorder(root);
    cout << endl;

    // Convert the BST into a Max Heap
    root = convertBSTIntoMaxHeap(root);

    cout << "Inorder traversal of Max Heap after conversion: ";
    printInorder(root);
    cout << endl;

    return 0;
}
