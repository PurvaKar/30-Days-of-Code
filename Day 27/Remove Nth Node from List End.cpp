/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) 
{
    ListNode* temp = A;
    int i, len=0;
    if(temp==NULL)
        return A;
    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }
    len++;
    if(B>=len)
        return A->next;
    else
    {
        len=len-B;
        temp=A;
        for(i=1;i<len;i++)
        {
            temp=temp->next;
        }
        temp->next=(temp->next)->next;
    }
    return A;
}
