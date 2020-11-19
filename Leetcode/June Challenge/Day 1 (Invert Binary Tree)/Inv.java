/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

// Recursive 

class Solution {
    public TreeNode invertTree(TreeNode root) {
        if(root==null) return null;
        root.left = swap(root.right ,root.right=root.left);
        invertTree(root.left);
        invertTree(root.right);
        return root;
    }
    TreeNode swap(TreeNode right , TreeNode left){
        return right;
    }
}

// Iterative
