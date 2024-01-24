// https://leetcode.com/problems/delete-node-in-a-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val; //copying the next node value
        node->next = node->next->next; // deleting the next node
    }
};

// tc -> O(1)
// sc -> O(1)
