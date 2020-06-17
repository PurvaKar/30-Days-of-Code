/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) 
{
    if(B==NULL)
        return A;
    if(A==NULL)
        return B;
    int sum,carry=0;
    sum=A->val+B->val+carry;
    if(sum>9)
    {
        carry=1;
        sum=sum%10;
    }
    ListNode* ans=new ListNode(sum);
    ListNode* res = ans;
    while(A->next!=NULL && B->next !=NULL)
    {
        A=A->next;
        B=B->next;
        sum=A->val+B->val+carry;
        if(sum>9)
        {
            carry=1;
            sum=sum%10;
        }
        else
            carry=0;
        ListNode* a = new ListNode(sum);
        ans->next=a;
        ans=ans->next;
    }
    while(A->next!=NULL)
    {
        A=A->next;
        sum=A->val+carry;
        if(sum>9)
        {
            carry=1;
            sum=sum%10;
        }
        else
            carry=0;
        ListNode* a = new ListNode(sum);
        ans->next=a;
        ans=ans->next;
    }
    while(B->next!=NULL)
    {
        B=B->next;
        sum=B->val+carry;
        if(sum>9)
        {
            carry=1;
            sum=sum%10;
        }
        else
            carry=0;
        ListNode* a = new ListNode(sum);
        ans->next=a;
        ans=ans->next;
    }
    if(carry==1)
    {
        ListNode* a = new ListNode(carry);
        ans->next=a;
        ans=ans->next;
    }
    return res;
}
