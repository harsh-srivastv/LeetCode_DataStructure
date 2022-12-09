// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root)
        {
            if(root->val < p->val and root->val < q->val)
                root = root->right;
            else if(root->val > p->val and root->val > q->val)
                root = root->left;
            else
                return root;
        }
        return NULL;
    }
};