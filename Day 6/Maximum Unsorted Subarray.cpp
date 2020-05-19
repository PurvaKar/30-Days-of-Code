vector<int> Solution::subUnsort(vector<int> &A) 
{
    vector<int> ans;
    int n = A.size();
    int i, j, k;
    for(i=0;i<n-1;i++)
        if(A[i]>A[i+1])
            break;
    if(i == n - 1)
    { 
        ans.push_back(-1);
        return ans;
    }
    for(j=n-1;j>0;j--)
        if(A[j]<A[j-1])
            break;
    int mn = A[i], mx = A[i];
    for(k = i; k <= j; k++)
    {
        mx = max(mx, A[k]);
        mn = min(mn, A[k]);
    }
    int l = 0, r = n - 1;
    for(k=0;k<i;k++)
        if(A[k]>mn)
        {
            i=k;
            break;
        }
    for(k=n-1;k>j;k--)
        if(A[k]<mx)
        {
            j=k;
            break;
        }
    ans.push_back(i);
    ans.push_back(j);
    return ans;
}