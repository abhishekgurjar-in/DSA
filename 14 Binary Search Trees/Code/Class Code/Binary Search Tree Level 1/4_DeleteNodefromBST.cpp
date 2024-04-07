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

Node* insertIntoBST(Node* root, int data) {
    if (root == nullptr) {
        Node* newNode = new Node(data);
        return newNode;
    }
    if (data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }
    else {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

Node* minValue(Node* root){
    if(root==nullptr){
        return nullptr;
    }
    Node* temp=root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    if(root==nullptr){
        return nullptr;
    }
    Node* temp=root;
    while(temp->right !=nullptr){
        temp = temp->right;
    }
    return temp;
}

bool searchInBST(Node* root, int target){
    if(root==nullptr){
        return false;
    }
    if(target==root->data){
        return true;
    }

    bool right=false;
    bool left =false;

    if(target>root->data){
        right=searchInBST(root->right,target);
    }
    if(target<root->data){
        left=searchInBST(root->left,target);
    }
    return right||left;
}

Node* deleteFromBST(Node* root,int target){
    if(root==nullptr){
        return nullptr;
    }
    if(target==root->data){
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
        }
        else if(root->left==nullptr && root->right!=nullptr){
            Node* childSubTree=root->right;
            delete root;
            return childSubTree;
        }
        else if(root->left!=nullptr && root->right==nullptr){
            Node* childSubTree=root->left;
            delete root;
            return childSubTree;
        }
        else if(root->left!=nullptr && root->right!=nullptr){
            Node* maxi=maxValue(root->left);
            root->data=maxi->data;
            root->left=deleteFromBST(root->left,maxi->data);
            return root;
        }
    }
    else if(target<root->data){
        root->left=deleteFromBST(root->left,target); 
    }
    else{
        root->right=deleteFromBST(root->right,target);
    }
    return root;
}

// Function to print the inorder traversal of the BST
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    int data[] = {5, 3, 8, 1, 4, 7, 9};

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        root = insertIntoBST(root, data[i]);
    }

    cout << "Inorder Traversal of the BST before deletion: ";
    inorderTraversal(root);
    cout << endl;

    int target = 4;
    root = deleteFromBST(root, target);

    cout << "Inorder Traversal of the BST after deletion: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}