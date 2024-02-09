// https://leetcode.com/problems/invert-binary-tree/description/

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
// tc --> O(N)
// sc --> O(N) -->worst case 
// sc --> O(logN) --> avg case if balanced tree
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)return NULL;
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left, root->right);
        return root;
    }
};
