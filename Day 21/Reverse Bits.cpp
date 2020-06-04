unsigned int Solution::reverse(unsigned int A) 
{
    long long int ans[32] = {};
    long long int i,val,n;
    i=31;
    while(A!=0)
    {
        ans[i]=A%2;
        A=A/2;
        i--;
    }
    n=32;
    val=0;
    std::reverse(ans, ans+n);
    for(i=0;i<32;i++)
    {
        n = (long long int)(pow(2, 31-i));
        val+=(ans[i]*n);
    }
    return val;
}
