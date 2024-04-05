#include <iostream>
#include <queue>
#include <map>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void printTopView(Node* root) {
    map<int, int> hdToNodeMap;

    queue<pair<Node*, int>> q;

    q.push(make_pair(root, 0));

    while (!q.empty()) { // Changed `,` to `.`
        pair<Node*, int> front = q.front();
        q.pop();

        Node* frontNode = front.first;
        int level = front.second;

        if (hdToNodeMap.find(level) == hdToNodeMap.end()) {
            hdToNodeMap[level] = frontNode->data;
        }

        if (frontNode->left != NULL) {
            q.push(make_pair(frontNode->left, level - 1));
        }
        if (frontNode->right != NULL) {
            q.push(make_pair(frontNode->right, level + 1));
        }
    }
    cout << "Printing Top View" << endl;
    for (auto data : hdToNodeMap) {
        cout << data.second << " ";
    }
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
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    printTopView(root);

    return 0;
}
