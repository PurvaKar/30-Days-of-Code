int Solution::diffPossible(vector<int> &A, int B) 
{
    int i,  j, n;
    n = A.size();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[j]-A[i]==B)
            {
                return 1;
            }
            if(A[j]-A[i]>B)
                break;
        }
    }
    return 0;
}
