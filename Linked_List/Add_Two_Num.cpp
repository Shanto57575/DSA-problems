// https://leetcode.com/problems/add-two-numbers/description/

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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *curr = head;
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry != 0)
        {
            int first = (l1!=NULL) ? l1->val : 0;
            int second = (l2!=NULL) ? l2->val : 0;
            int sum = first + second + carry; 
            int new_Digit = sum % 10;
            carry = sum / 10;
            curr->next = new ListNode(new_Digit);
            curr = curr->next;
            if(l1!=NULL) l1 = l1->next;
            if(l2!=NULL) l2 = l2->next;
        }
        ListNode *new_head = head->next;
        return new_head;
    }
};
