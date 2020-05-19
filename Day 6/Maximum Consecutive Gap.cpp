int Solution::maximumGap(const vector<int> &A) 
{
    int i, val, n;
    n=A.size();
    if(n<2)
        return 0;
    val=-1;
    vector<int> ans(n);
    for(i=0;i<n;i++)
    {    
        ans[i]=A[i];
    }
    sort(ans.begin(), ans.end());
    for(i=0;i<n-1;i++)
        val = max(val, ans[i+1]-ans[i]);
    return val;
}