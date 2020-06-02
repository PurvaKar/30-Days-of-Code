int Solution::removeElement(vector<int> &A, int B) 
{
    long long int i, j, n;
    n = A.size();
    j=0;
    for(i=0;i<n;i++)
    {
        if(A[i]!=B)
        {
            A[j++]=A[i];
        }
    }
    return j;
}