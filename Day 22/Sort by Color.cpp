void Solution::sortColors(vector<int> &A) 
{
    long long int i, r, w, b, n;
    n=A.size();
    r=w=b=0;
    for(i=0;i<n;i++)
    {
        if(A[i]==0)
            r++;
        else if(A[i]==1)
            w++;
        else
            b++;
    }
    for(i=0;i<r;i++)
        A[i]=0;
    for(;i<r+w;i++)
        A[i]=1;
    for(;i<n;i++)
        A[i]=2;
}