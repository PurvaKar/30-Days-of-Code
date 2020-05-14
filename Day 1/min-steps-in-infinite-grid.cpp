int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int c, i, n;
    n=A.size();
    c=0;
    for(i=1;i<n;i++)
    {
        c = c + max(abs(A[i]-A[i-1]), abs(B[i]-B[i-1]));
    }
    return c;
}