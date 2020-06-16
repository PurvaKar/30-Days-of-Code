/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* reverse(ListNode* head) 
{ 
        ListNode * current = head; 
        ListNode  *prev = NULL, *next = NULL; 
  
        while (current != NULL) 
        { 
            next = current->next; 
            current->next = prev;  
            prev = current; 
            current = next; 
        } 
        head = prev; 
    return head;
}
ListNode* Solution::reorderList(ListNode* A) 
{
    ListNode* temp=A;
    if(A==NULL)
        return A;
    int i,j,len=0;
    while(temp->next != NULL)
    {
        len++;
        temp=temp->next;
    }
    len++;
    if(len<=2)
        return A;
    i=1;
    temp=A;
    while(i<=(len/2))
    {
        temp=temp->next;
        i++;
    }
    ListNode* temp2=temp->next;
    temp->next=NULL;
    temp2= reverse(temp2);
    temp=A;
    while(temp2)
    {
        ListNode* t=temp2;
        temp2=temp2->next;
        t->next=temp->next;
        temp->next=t;
        ListNode* r=A;
        temp=(temp->next)->next;
    }
    return A;
}
