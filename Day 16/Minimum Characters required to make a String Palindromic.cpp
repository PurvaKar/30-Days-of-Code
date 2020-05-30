int Solution::solve(string A) 
{
    long long int i, j, n, skip, c,cc;
    skip=c=0;
    n=A.size();
    for(i=0,j=n-1;i<j;)
    {
        if(A[i]!=A[j])
        {
            skip++;
            j--;
        }
        else
        {
            for(c=i+1,cc=j-1;c<cc;c++,cc--)
            {
                if(A[c]!=A[cc])
                {
                    skip++;
                    j--;
                    break;
                }
            }
            if(c<cc)
                continue;
            i++;
            j--;
        }
    }
    return skip;
}