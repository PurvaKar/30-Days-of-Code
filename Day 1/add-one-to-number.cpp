vector<int> Solution::plusOne(vector<int> &A) 
{
    long long int val,i,n;
    n=A.size();
    A[n-1]++;
    val = A[n-1]/10;
    A[n-1]= A[n-1]%10;
    if(val == 1)
    {
        for(i=n-2;i>=0;i--)
        {
            if(val==1)
            {
                A[i]++;
                val = A[i]/10;
                A[i] = A[i]%10;
            }
        }
        if(val==1)
            A.insert(A.begin(), 1);
    }
    while(A[0]==0 && A.size()>=0)
    {
        A.erase(A.begin());
    }
    return A;
}