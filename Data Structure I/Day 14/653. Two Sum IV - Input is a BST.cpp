// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/?envType=study-plan&id=data-structure-i

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
    vector<int> temp;
    void inorder(TreeNode* root)
    {
        
        if(!root) return;
        
        inorder(root->left);
        temp.push_back(root->val);
        inorder(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        
        int start=0, end=temp.size()-1;
        while(start < end){
            if(temp[start] + temp[end] == k) return true;
            
            else if(temp[start] + temp[end] < k) start++;
            else end--;
        }
        return false;
    }
};