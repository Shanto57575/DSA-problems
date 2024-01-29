// https://leetcode.com/problems/merge-two-sorted-lists/description/

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


// tc-> O(NlogN)
// Sc -> O(N)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>v;

        while(list1 != NULL)
        {
            v.push_back(list1->val);
            list1 = list1->next;
        }

        while(list2 != NULL)
        {
            v.push_back(list2->val);
            list2 = list2->next;
        }

        sort(v.begin(),v.end());

        ListNode *head = new ListNode();
        ListNode *temp = head;

        for(int i=0; i<v.size(); i++)
        {
           temp->next = new ListNode(v[i]);
           temp = temp->next;
        }
        head = head->next;
        return head;
    }
};


// tc-> O(N)
// Sc -> O(1)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode(-1);
        ListNode *traverse = head;
         
        while(list1 != NULL && list2 != NULL)
        {
           if(list1->val <= list2->val)
           {
              traverse->next = list1;
              traverse = traverse->next;
              list1 = list1 -> next;
           }
           else
           {
              traverse->next = list2;
              traverse = traverse->next;
              list2 = list2 -> next;
           }
        } 

        traverse -> next = list1? list1 : list2;

        return head->next;
    }
};

