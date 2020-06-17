/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) 
{
    map<ListNode*, int> occ;
    while(A->next!=NULL)
    {
        if(occ.find(A)==occ.end())
        {
            occ[A]++;
        }
        else
            return A;
        A=A->next;
        
    }
    return NULL;
}
