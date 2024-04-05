#include <iostream>
#include <algorithm> // for std::max
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int leftNode = maxDepth(root->left);
        int rightNode = maxDepth(root->right);
        int height = max(leftNode, rightNode) + 1;
        return height;
    }
};

int main() {
    // Create a binary tree for testing
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Create an instance of the Solution class
    Solution solution;

    // Calculate and print the maximum depth of the tree
    int maxDepth = solution.maxDepth(root);
    cout << "Maximum depth of the tree: " << maxDepth << endl;

    return 0;
}
