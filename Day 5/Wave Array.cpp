vector<int> Solution::wave(vector<int> &A) 
{
    sort(A.begin(), A.end());
    long long int i, n, temp;
    n=A.size();
    for(i=1;i<n;i+=2)
    {
        temp=A[i];
        A[i]=A[i-1];
        A[i-1]=temp;
        
    }
    return A;
}
