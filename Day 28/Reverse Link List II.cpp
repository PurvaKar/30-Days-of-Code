/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) 
{
    if(B==C)
        return A;
    ListNode* temp = A;
    vector<int> t;
    int i,l=0;
    while(temp->next!=NULL)
    {
        l++;
        if(l>=B && l<=C)
            t.push_back(temp->val);
        temp=temp->next;
    }
    l++;
    if(l>=B && l<=C)
        t.push_back(temp->val);
    temp=A;
    i=l=0;
    reverse(t.begin(), t.end());
    while(temp->next!=NULL)
    {
        l++;
        if(l>=B && l<=C)
            temp->val=t[i++];
        temp=temp->next;
    }
    l++;
    if(l>=B && l<=C)
        temp->val=t[i++];
    return A;
}
