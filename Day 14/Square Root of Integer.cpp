int Solution::sqrt(int A) 
{
    long i, low, high, mid;
    if(A==1 || A==0)
        return A;
    low = 1;
    high = A;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(mid*mid == A )
            return mid;
        if(mid*mid<A)
        {
            low = mid+1;
            i = mid;
        }
        else
            high = mid-1;
    }
    return i;
}