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
 
// Recursive Approach
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        swap(root->left,root->right);
        invertTree(root->left); 
        invertTree(root->right);
        return root;
    }
};

// Iterative Approach

// Using Queue
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        queue<TreeNode*> mq;
        mq.push(root);
        while(!mq.empty()){
            auto node = mq.front();
            mq.pop();
            if(!node) continue;
            swap(node->left,node->right);
            mq.push(node->left);
            mq.push(node->right);
        }
        return root;
    }
};

// Using Stack
//TODO


