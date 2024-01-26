// https://www.codingninjas.com/studio/problems/introduction-to-linked-list_8144737?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM

/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    Node *head = new Node();
    Node *temp = head;

    for(int i=0; i<arr.size(); i++)
    {
       temp->data = arr[i];
       if(i<arr.size()-1) // because next pointer will be exceeded
       {
         temp->next = new Node();
         temp = temp->next;  
       }
    }

    return head;
}
