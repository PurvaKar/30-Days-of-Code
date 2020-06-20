/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) 
{
    ListNode* first = A;
    A=A->next;
    ListNode* temp_first = first;
    int temp;
    while (A!=NULL)
    {
        if(temp_first!=A)
        {
            if (temp_first->val >= A->val)
            {
                temp = A->val;
                A->val = temp_first->val;
                temp_first->val = temp;
            }
            else
                temp_first = temp_first->next;
        }
        else
        {
            A = A->next;
            temp_first = first;
        }
    }
    return first;
}
