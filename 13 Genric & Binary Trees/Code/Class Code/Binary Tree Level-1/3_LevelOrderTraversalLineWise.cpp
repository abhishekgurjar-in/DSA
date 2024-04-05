#include <iostream>
#include <queue>
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

void LevelOrderTraversal(Node* root) {
    if (root == nullptr) return; // Handle the case when root is nullptr

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* frontNode = q.front();
        q.pop();
        cout << frontNode->data << " ";
        if (frontNode->left != nullptr) {
            q.push(frontNode->left);
        }
        if (frontNode->right != nullptr) {
            q.push(frontNode->right);
        }
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level order traversal: ";
    LevelOrderTraversal(root);
    cout << endl;

    return 0;
}
