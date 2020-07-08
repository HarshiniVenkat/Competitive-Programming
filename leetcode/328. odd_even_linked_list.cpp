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
    ListNode* oddEvenList(ListNode* head) 
    {    
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* oddp=head;
        ListNode* evenp=head->next;
        ListNode* even=head->next;
        
        while(evenp!=NULL && evenp->next!=NULL)
        {
            oddp->next=oddp->next->next;
            oddp=oddp->next;
            evenp->next=evenp->next->next;
            evenp=evenp->next;
        }
        oddp->next=even;
        return head;
    }
};
