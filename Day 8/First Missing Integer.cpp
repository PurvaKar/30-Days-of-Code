int Solution::firstMissingPositive(vector<int> &A) 
{
    sort(A.begin(), A.end());
    int i, n, k;
    n=A.size();
    for(i=0, k=0;i<n;i++)
    {
        if(A[i]>0)
        {
            k++;
            if(A[i]!=k)
                return k;
        }
    }
}