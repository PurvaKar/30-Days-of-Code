/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) 
{
    int i,len=0;
    
    ListNode* temp = A;
    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }
    len++;
    if(A==NULL || len==1)
        return 1;
    temp=A;
    vector<int> t;
    for(i=0;i<len/2;i++)
    {
        t.push_back(temp->val);
        temp=temp->next;
    }
    reverse(t.begin(), t.end());
    i=0;
    if(len%2==1)
        temp=temp->next;
    while(temp->next!=NULL)
    {
        if(temp->val != t[i++])
            return 0;
        temp=temp->next;
    }
    if(temp->val != t[i++])
        return 0;
    return 1;
}
