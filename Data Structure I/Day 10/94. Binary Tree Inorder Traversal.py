#https://leetcode.com/problems/binary-tree-inorder-traversal/?envType=study-plan&id=data-structure-i



# Definition for a binary tree node.
from ast import List
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    
        
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if root == None:
            return []
        
        def dfs(root, res):
            if root is None:
                return
            dfs(root.left, res)
            res.append(root.val)
            dfs(root.right, res)
            
            return res
        return dfs(root, [])
        