/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) 
{
    ListNode* temp=A;
    map<int, int> occ;
    while(temp!=NULL)
    {
        occ[temp->val]++;  
        temp=temp->next;
    }
    temp=A;
    while(temp->next!=NULL)
    {
        if(occ[(temp->next)->val]>1)
        {
            temp->next=(temp->next)->next;
        }
        else
            temp=temp->next;
    }
    if(occ[A->val]>1)
        A=A->next;
    return A;
}
