int Solution::maxArea(vector<int> &A) 
{
    long long int i, j, n, ans;
    n=A.size();
    ans=0;
    i=0;j=n-1;
    while(i<j)
    {
        ans=max(ans, (j-i) * min(A[i], A[j]));
        if(A[i]<A[j])
            i++;
        else
            j--;
    }
    return ans;
}
