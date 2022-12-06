import java.util.*;

// https://leetcode.com/problems/symmetric-tree/?envType=study-plan&id=data-structure-i


// Definition for a binary tree node.
public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public boolean isSymmetric(TreeNode root) {
     if (root == null) {
            return true;
        }
        return iterative(root);
    }
    private boolean iterative(TreeNode root) {
        Stack<TreeNode> left = new Stack<TreeNode>();
        Stack<TreeNode> right = new Stack<TreeNode>();
        left.push(root.left);
        right.push(root.right);
        while (left.size() > 0) {
            TreeNode l = left.pop();
            TreeNode r = right.pop();
            if (l == null && r == null) {
                continue;
            }
            if (l != null && r != null && l.val == r.val) {
                left.push(l.left);
                right.push(r.right);
                left.push(l.right);
                right.push(r.left);
                continue;
            }
            return false;
        }
        return true;
    }
}