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
    ListNode* temp = A;
    map<long long int, long long int> occ;
    occ[(temp->val)]++;
    while(temp->next!=NULL)
    {
        if(occ.find((temp->next)->val)==occ.end())
        {
            occ[(temp->next)->val]++;
            temp=temp->next;
        }
        else
        {
            ListNode* dt = temp->next;
            temp->next=(temp->next)->next;
            free(dt);
        }
    }
    return A;
}
