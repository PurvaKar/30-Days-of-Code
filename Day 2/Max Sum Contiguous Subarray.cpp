int Solution::maxSubArray(const vector<int> &A) 
{
    int start, end, i, n;
    n=A.size();
    start=end=A[i];
    for(i=1;i<n;i++)
    {
        start = max(A[i], start+A[i]);
        end = max(end, start);
    }
    return end;
}