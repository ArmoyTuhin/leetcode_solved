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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slowptr = head;
        ListNode *fastptr = head;
        
        while(fastptr && fastptr->next)
        {
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
            if(slowptr==fastptr)
            {
                fastptr = head;
                while(fastptr!=slowptr)
                    {
                        fastptr=fastptr->next;
                        slowptr=slowptr->next;
                    }
                return fastptr;
            }
        }
        return NULL;
    }
};