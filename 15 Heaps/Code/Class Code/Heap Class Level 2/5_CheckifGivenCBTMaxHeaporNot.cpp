#include <iostream>
#include <climits>
using namespace std;

class OurPair {
public:
    int maxVal;
    bool isHeap;

    OurPair(int maxVal, bool isHeap) {
        this->maxVal = maxVal;
        this->isHeap = isHeap;
    }
};

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    };

    OurPair checkMaxHeap(Node* root) {
        if (root == NULL) {
            return OurPair(INT_MIN, true);
        }

        OurPair leftAns = checkMaxHeap(root->left);
        OurPair rightAns = checkMaxHeap(root->right);

        if (leftAns.isHeap && rightAns.isHeap && root->data >= leftAns.maxVal && root->data >= rightAns.maxVal) {
            int maxVal = max(root->data, max(leftAns.maxVal, rightAns.maxVal));
            return OurPair(maxVal, true);
        } else {
            return OurPair(INT_MAX, false);
        }
    }
};

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(20);

    Node tree(0); // Pass any initial value for the tree node data
    OurPair result = tree.checkMaxHeap(root);

    if (result.isHeap) {
        cout << "The tree is a max heap." << endl;
        cout << "Max value in the heap: " << result.maxVal << endl;
    } else {
        cout << "The tree is not a max heap." << endl;
    }

    return 0;
}
