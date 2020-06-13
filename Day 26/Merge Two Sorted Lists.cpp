/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) 
{
    ListNode* ans=new ListNode(0);
    ListNode* c=ans;
    
    while(A && B)
    {
        if(A->val<B->val)
        {
            c->next=A;
            A=A->next;
        }
        else
        {
            c->next=B;
            B=B->next;
        }
        
        c=c->next;
        
    }
    
    if(A!=NULL)
        c->next=A;
    
    if(B!=NULL)
        c->next=B;
    
    return ans->next;
}
