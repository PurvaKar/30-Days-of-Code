int Solution::removeDuplicates(vector<int> &A) 
{
    long long int i,j,n;
    j=0;
    n=A.size();
    if(n<2)
        return n;
    for(i=1;i<n;i++)
    {
        if(A[i]!=A[j])
        {
            A[++j]=A[i];
        }
    }
    return j+1;
}