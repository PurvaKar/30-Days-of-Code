/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *merge(ListNode *L, ListNode *R) 
{
    if(!L) 
        return R;
    if(!R) 
        return L;
    ListNode *h = NULL;
    if(L->val < R->val)
    {
        h = L;
        h->next = merge(L->next, R);
    }
    else 
    {
        h = R;
        h->next = merge(L, R->next);
    }
    return h;
}
ListNode* Solution::sortList(ListNode* A) 
{
    if(!A || !A->next) 
        return A;
    ListNode *slow = A, *fast = A->next; 
    while(fast && fast->next) 
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *left = A, *right = slow->next;
    slow->next = NULL;
    left = sortList(left);
    right = sortList(right);
    return merge(left, right);
}

