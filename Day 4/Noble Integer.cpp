int Solution::solve(vector<int> &A) 
{
    int i, n;
    n=A.size();
    sort(A.begin(), A.end());
    for(i=0;i<n-1;i++)
    {
        if(A[i]==(n-i-1) && A[i]<A[i+1])
            return 1;
            
    }
    if(A[n-1]==0)
        return 1;
    return -1;
}