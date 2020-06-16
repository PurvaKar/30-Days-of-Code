/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) 
{
    if(A==NULL)
        return A;
    ListNode* temp =A;
    ListNode* t1;
    ListNode* prev;
    int l=0;
    while(temp->next!=NULL)
    {
        l++;
        t1=temp->next;
        temp->next=(temp->next)->next;
        t1->next=temp;
        if(l==1)
            A=t1;
        else
            prev->next=t1;
        prev = temp;
        if(temp->next == NULL)
            break;
        temp=temp->next;
    }
    
    return A;
}
