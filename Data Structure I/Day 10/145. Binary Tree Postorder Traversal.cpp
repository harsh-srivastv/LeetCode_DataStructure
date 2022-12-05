// https://leetcode.com/problems/binary-tree-postorder-traversal/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> ans;
    
    void pt(TreeNode* root){
        if(root == NULL){
            return;
        }
        
        pt(root->left);
        pt(root->right);
        ans.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        pt(root);
        return ans;
    }
};