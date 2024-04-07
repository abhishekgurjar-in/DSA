/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long long int lowerBound = LLONG_MIN;  // Lower bound of a 64-bit signed integer
        long long int upperBound = LLONG_MAX;  // Upper bound of a 64-bit signed integer

        return solve(root, lowerBound, upperBound);
    }

    bool solve(TreeNode* root, long long int lowerBound, long long int upperBound) {
        if (root == nullptr) {
            return true;
        }

        bool cond1 = (root->val > lowerBound);
        bool cond2 = (root->val < upperBound);

        bool leftValid = solve(root->left, lowerBound, root->val);
        bool rightValid = solve(root->right, root->val, upperBound);

        // Check if current node's value is within bounds and both left and right subtrees are valid BSTs
        return cond1 && cond2 && leftValid && rightValid;
    }
};
