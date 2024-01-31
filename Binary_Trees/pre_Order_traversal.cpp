// https://leetcode.com/problems/binary-tree-preorder-traversal/description/

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

/* ----------------------------------------------------               ----------------------------------------------------------------------
                                                         Recursive way
 -----------------------------------------------------              ---------------------------------------------------------------------- */

class Solution {
public:
    vector<int>v;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)return v;

        v.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);

        return v;
    }
};

/* ----------------------------------------------------               ----------------------------------------------------------------------
                                                         Iterative way
 -----------------------------------------------------              ----------------------------------------------------------------------  */

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        stack<TreeNode*>st;
        st.push(root);

        while(!st.empty())
        {
            TreeNode *node = st.top();
            ans.push_back(node->val);
            st.pop();
            if(node->right != NULL)st.push(node->right);
            if(node->left != NULL)st.push(node->left);
        }
        return ans;
    }
};
