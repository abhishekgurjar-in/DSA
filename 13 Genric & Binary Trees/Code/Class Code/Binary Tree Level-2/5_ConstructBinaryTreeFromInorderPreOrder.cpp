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
    map<int,int>mp;
public:
int searchInorder(vector<int>& inorder,int size,int element){
    for(int i=0;i<size;i++){
        if(inorder[i]==element){
            return i;
        }
    }
    return -1;
}
void mapping(vector<int>& inorder,int &size){
    for(int i=0;i<size;i++){
        mp[inorder[i]]=i;
    }
}

TreeNode *solve(vector<int>& preorder,vector<int>& inorder,int &preIndex,int size,int inorderStart,int inorderEnd){
    if(preIndex>=size||inorderStart>inorderEnd){
        return NULL;
    }
    int element =preorder[preIndex];
    preIndex++;
    
    TreeNode* root =new TreeNode(element);

    int position=mp[element];
root->left=solve(preorder,inorder,preIndex,size,inorderStart,position-1);

root->right=solve(preorder,inorder,preIndex,size,position+1,inorderEnd);
return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       int preIndex=0;
       int size=inorder.size();
       int inorderStart=0;
       int inorderEnd=size-1;
       mapping(inorder,size);
        TreeNode* binaryTreeRoot=solve(preorder,inorder,preIndex,size,inorderStart,inorderEnd);
        return binaryTreeRoot;
    }
};