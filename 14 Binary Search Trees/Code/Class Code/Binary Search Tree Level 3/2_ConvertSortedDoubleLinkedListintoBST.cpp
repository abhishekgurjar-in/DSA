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

Node* convertDLLtoBST(Node* &head, int n) {
    if (head == NULL || n <= 0) {
        return NULL;
    }

    Node* leftST = convertDLLtoBST(head, n / 2);

    Node* root = head;
    root->left = leftST;
    head = head->right;

    Node* rightST = convertDLLtoBST(head, n - n / 2 - 1);
    root->right = rightST;

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

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->right;
    }
    return count;
}

int main() {
    Node* head = new Node(1);
    head->right = new Node(2);
    head->right->right = new Node(3);
    head->right->right->right = new Node(4);
    head->right->right->right->right = new Node(5);

    int n = countNodes(head);
    Node* root = convertDLLtoBST(head, n);

    cout << "Inorder traversal of constructed BST: ";
    printInorder(root);
    cout << endl;

    return 0;
}
