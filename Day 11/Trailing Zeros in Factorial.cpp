int Solution::trailingZeroes(int A) 
{
    long long int i,c;
    c=0;
    for(i=5;A/i>=1;i*=5)
        c+=(A/i);
    return c;
}