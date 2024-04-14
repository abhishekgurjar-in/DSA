#include <iostream>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == nullptr) return true; // Empty tree is complete

        queue<TreeNode*> q;
        q.push(root);
        bool nullFound = false;

        while (!q.empty()) {
            TreeNode* front = q.front();
            q.pop();
            if (front == nullptr) {
                nullFound = true;
            } else {
                if (nullFound) {
                    return false; // Non-null node found after encountering a null node
                }
                q.push(front->left);
                q.push(front->right);
            }
        }
        return true; // All nodes processed without violation
    }
};

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    Solution sol;
    if (sol.isCompleteTree(root)) {
        cout << "The tree is a complete binary tree." << endl;
    } else {
        cout << "The tree is not a complete binary tree." << endl;
    }

    return 0;
}
