// https://leetcode.com/problems/binary-tree-inorder-traversal/description/

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

// For both and space time and space are same

// tc ----> O(N)
// Sc ----> O(N)

/* ----------------------------------------------------               ----------------------------------------------------------------------
                                                         Recursive way
  -----------------------------------------------------              ----------------------------------------------------------------------*/
class Solution {
public:
    vector<int>v;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)return v;
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
        return v;
    }
};

/* ----------------------------------------------------               ----------------------------------------------------------------------
                                                         Iterative way
 -----------------------------------------------------              ----------------------------------------------------------------------  */

// Using Stack

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode *node = root;
        vector<int>ans;

        while(1)
        {
            if(node != NULL)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if(st.empty()) break;
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};
