/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) 
{
    ListNode* temp = A;
    ListNode* t =A;
    int i, len=0;
    if(temp==NULL)
        return A;
    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }
    len++;
    B=B%len;
    if(B==0)
        return A;
    else
    {
        len=len-B;
        temp=A;
        for(i=1;i<len;i++)
        {
            temp=temp->next;
        }
        t=temp->next;
        temp->next=NULL;
        temp=t;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=A;
        A=temp;
    }
    return A;
}
