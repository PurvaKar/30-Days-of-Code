vector<int> Solution::flip(string A) 
{
    int i, L, R, n, res, start, v;
    L=R=-1;
    n=A.length();
    vector<int> ans, val(n);
    for(i=0;i<n;i++)
    {
        if(A[i]=='1')
            val[i]=-1;
        else
            val[i]=1;
    }
    start=res=v=0;
    for(i=0;i<n;i++)
    {
        if(res+val[i]<0)
        {
            start=i+1;
            res=0;
        }
        else
            res+=val[i];
        if(res>v)
        {
            v=res;
            L=start;
            R=i;
        }
    }
    if(L==-1 && R==-1)
        return ans;
    ans.push_back(L+1);
    ans.push_back(R+1);
    return ans;
}
