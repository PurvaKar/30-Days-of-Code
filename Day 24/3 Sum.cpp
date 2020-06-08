int Solution::threeSumClosest(vector<int> &A, int B) 
{
    int n=A.size();
    sort(A.begin(),A.end());
    long long int bestSum=1000000000,sum=0;
    for(int i=0;i<n-2;i++)
    {
        int start=i+1,end=n-1;
        while(start<end)
        {
            sum=long(A[i])+A[start]+A[end];
            if(abs(B-sum)<abs(B-bestSum))
                bestSum=sum;
            else if(sum>B)
                end--;
            else
                start++;
        }
    }
    return bestSum;
}
