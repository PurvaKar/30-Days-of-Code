int Solution::numSetBits(unsigned int A) 
{
    long long int i,c,n;
    c=0;
    while(A!=0)
    {
        n=A%2;
        if(n==1)
            c++;
        A/=2;
    }
    return c;
}