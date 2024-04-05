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
private:
    unordered_map<int, int> mp;

public:
    void mapping(vector<int>& inorder, int size) {
        for (int i = 0; i < size; i++) {
            mp[inorder[i]] = i;
        }
    }

    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int* postIndex, int size, int inorderStart, int inorderEnd) {
        if (*postIndex < 0 || inorderStart > inorderEnd) {
            return nullptr;
        }

        int element = postorder[(*postIndex)--];
        TreeNode* root = new TreeNode(element);

        int position = mp[element];

        root->right = solve(postorder, inorder, postIndex, size, position + 1, inorderEnd);
        root->left = solve(postorder, inorder, postIndex, size, inorderStart, position - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size = inorder.size();
        int postIndex = size - 1;
        int inorderStart = 0;
        int inorderEnd = size - 1;
        mapping(inorder, size);
        TreeNode* binaryTreeRoot = solve(postorder, inorder, &postIndex, size, inorderStart, inorderEnd);
        return binaryTreeRoot;
    }
};