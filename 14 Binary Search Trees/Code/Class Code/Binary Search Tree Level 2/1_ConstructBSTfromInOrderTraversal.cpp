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

Node* bstFromInorder(int inorder[], int start, int end) {
    if (start > end) {
        return NULL;
    }
    int mid = (start + end) / 2;
    int element = inorder[mid];
    Node* root = new Node(element);

    root->left = bstFromInorder(inorder, start, mid - 1);
    root->right = bstFromInorder(inorder, mid + 1, end);

    return root;
}

void printInorder(Node* node) {
    if (node == NULL) {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main() {
    int inorder[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(inorder) / sizeof(inorder[0]);

    Node* root = bstFromInorder(inorder, 0, n - 1);

    cout << "Inorder traversal of constructed BST: ";
    printInorder(root);
    cout << endl;

    return 0;
}
