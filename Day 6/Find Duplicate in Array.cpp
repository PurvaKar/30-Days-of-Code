int Solution::repeatedNumber(const vector<int> &A) 
{
    vector<int> ans;
    int i, n;
    n=A.size();
    for(i=0;i<n;i++)
    {
        ans.push_back(A[i]);
    }
    sort(ans.begin(), ans.end());
    for(i=0;i<n-1;i++)
    {
        if(ans[i]==ans[i+1])
            return ans[i];
    }
    return -1;
}
