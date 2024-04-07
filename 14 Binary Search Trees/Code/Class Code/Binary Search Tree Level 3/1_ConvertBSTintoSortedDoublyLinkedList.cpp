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

void convertBSTtoDLL(Node* root, Node* &head) {
    if (root == NULL) {
        return;
    }

    convertBSTtoDLL(root->right, head);

    root->right = head;
    if (head != NULL) {
        head->left = root;
    }
    head = root;

    convertBSTtoDLL(root->left, head);
}

void printDLL(Node* head) {
    Node* current = head;
    cout << "Doubly Linked List (from left to right): ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->right;
    }
    cout << endl;
}

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    Node* head = NULL;
    convertBSTtoDLL(root, head);

    printDLL(head);

    return 0;
}
