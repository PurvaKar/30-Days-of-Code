vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    int i, a, b, n;
    n=A.size();
    vector<bool> visited(n+1, false);
    for(i=0;i<n;i++)
    {
        if(visited[A[i]] == false)
            visited[A[i]]=true;
        else
            a=A[i];
    }
    for(i=1;i<n+1;i++)
    {
        if(visited[i]==false)
            b=i;
    }
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}