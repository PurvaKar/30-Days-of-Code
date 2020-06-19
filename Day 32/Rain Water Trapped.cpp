int Solution::trap(const vector<int> &A)
{
    int i,len = A.size();
    int left[len], right[len];
    int leftmax = A[0], rightmax = A[len-1];
    left[0]=0;
    right[len-1]=0;
    for(i=1;i<len;i++)
    {
        left[i]=leftmax;
        if(leftmax<A[i])
            leftmax = A[i];
    }
    for(i = len-2;i>=0;i--)
    {
        right[i] = rightmax;
        if(rightmax<A[i])
            rightmax = A[i];
    }
    int c, sum = 0;
    for(int i=1;i<len-1;i++)
    {
        c= min(left[i],right[i]);
        if(c > A[i])
        sum += (c - A[i]);
    }
    
    return sum;
}
