int Solution::isPrime(int A) 
{
    int i,c;
    c=0;
    if(A==1)
        return 0;
    
    for(i=1;i<=sqrt(A);i++)
    {
        if(A%i==0)
            c++;
    }
    if(c==1)
        return 1;
    else
        return 0;
}