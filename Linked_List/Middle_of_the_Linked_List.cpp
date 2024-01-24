// https://leetcode.com/problems/middle-of-the-linked-list/description/

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// tc-> O(N)
// sc-> O(1)
class Solution {
public:
    ListNode* middleNode(ListNode *head) {
        int cnt = 0;
        ListNode *temp = head;
        while(temp!=NULL)
        {
          temp = temp->next;
          cnt++;
        }
        cnt = cnt/2;
        while(cnt--)
        {
           head = head->next;
        }
        return head;
    }
};

// Fast and slow pointer approach
// tc-> O(N)
// sc-> O(1)
class Solution {
public:
    ListNode* middleNode(ListNode *head) {
        
        ListNode *slow = head, *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
           slow = slow->next;
           fast = fast->next->next;
        }
        
        return slow;
    }
};
