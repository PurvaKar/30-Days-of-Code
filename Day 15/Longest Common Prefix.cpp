string Solution::longestCommonPrefix(vector<string> &A) 
{
    long long int i,j,n,l;
    n = A.size();
    l = A[0].size();
    string ss;
    for(i=0;i<n;i++)
    {
        if(A[i].size()<=l)
        {
            ss = A[i];
            l = A[i].size();
        }
    }
    l=INT_MAX;
    for(i=0;i<n;i++)
    {
        string sss = A[i];
        for(j=0;j<A[i].size();j++)
        {
            if(sss[j]!=ss[j])
                break;
        }
        l = min(l, j);
    }
    string s;
    for(i=0;i<l;i++)
        s+=A[0][i];
    return s;
}