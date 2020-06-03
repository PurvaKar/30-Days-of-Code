int Solution::strStr(const string A, const string B) 
{
    long long int i, n, j, m, k;
    n=A.size();
    m=B.size();
    if(m>n || n==0 || m==0)
        return -1;
    for(i=0,j=0;i<n;i++)
    {
        if(A[i]==B[0])
        {
            k=i;
            for(j=0;j<m;j++,i++)
                if(A[i]!=B[j])
                    break;
            if(j==m)    
                return k;
            i=k;
        }
    }
    return -1;
}
