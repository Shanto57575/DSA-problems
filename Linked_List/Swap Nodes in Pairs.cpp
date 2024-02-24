// https://leetcode.com/problems/swap-nodes-in-pairs/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// tc --> o(N)
// sc --> O(1)

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *first = new ListNode(0);
        ListNode *prev = first;
        ListNode *curr = head;
        
        while(curr != NULL && curr->next != NULL)
        {
           prev->next = curr->next;
           curr->next = prev->next->next;
           prev->next->next = curr;

           prev = curr;
           curr = curr->next;
        }

        head = first->next;
        delete first;
        return head;
    }
};
