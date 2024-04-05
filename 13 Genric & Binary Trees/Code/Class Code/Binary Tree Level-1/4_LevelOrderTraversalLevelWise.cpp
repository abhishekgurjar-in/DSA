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

void levelOrderTraversalLevelWise(Node* root) {
    if (root == nullptr) {
        cout << "Empty tree!" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(nullptr); // Mark the end of the first level

    while (!q.empty()) {
        Node* frontNode = q.front();
        q.pop();

        if (frontNode == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr); // Mark the end of the next level
            }
        } else {
            cout << frontNode->data << " ";

            if (frontNode->left != nullptr) {
                q.push(frontNode->left);
            }
            if (frontNode->right != nullptr) {
                q.push(frontNode->right);
            }
        }
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level order traversal level-wise:" << endl;
    levelOrderTraversalLevelWise(root);

    return 0;
}
