// https://leetcode.com/problems/diameter-of-binary-tree/

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
// sc --> O(N)

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        helper(root, d);
        return d;
    }
private:
    int helper(TreeNode* root, int &d)
    {
        if(root==NULL)return 0;

        int ls = helper(root->left, d);
        int rs = helper(root->right, d);

        d = max(d, ls + rs);

        return 1 + max(ls, rs);
    }
};
