string Solution::convert(string A, int B) 
{
    int i, j, k, n, gi, gj;
    n=B;
    k=0;
    gi=2*(B-1);gj=1;
    string ans;
    if(B==1)
        return A;
    if(B==2)
    {
        for(i=0;i<A.size();i+=2)
            ans+=A[i];
        for(i=1;i<A.size();i+=2)
            ans+=A[i]; 
        return ans;
    }
    j=0;
    while(B>0)
    {
        if(B==n || B==1)
        {
            gi=2*(n-1);
            for(i=k;i<A.size();i+=gi)
            {
                ans+=A[i];
            }
            
        }
        else
        {
            gi=2*(B-1);
            j=0;
            for(i=k;i<A.size();)
            {
                ans+=A[i];
                if(j==0)
                {
                    i+=gi;
                    j=1;
                }
                else
                {
                    i+=(gj+1);
                    j=0;
                }
            }
            gj+=2;
        }
        k++;
        B--;
    }
    return ans;
}
