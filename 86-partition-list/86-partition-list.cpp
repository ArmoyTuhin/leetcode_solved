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
    ListNode* partition(ListNode* head, int x) {
         ListNode* temp = head;
         ListNode* leftlist = new ListNode(0);
         ListNode* rightlist = new ListNode(0);
         ListNode* left = leftlist;
         ListNode* right = rightlist;
        while(temp!=nullptr)
        {
         if(temp->val<x)
            {
             left->next=temp;
             left=left->next;
            }
         else
            {
            right->next=temp;
            right=right->next;
            }
        temp=temp->next;
        }
        right->next =NULL;
        left->next=rightlist->next;
        return leftlist->next;
    }
};