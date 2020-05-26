int gcdAB(int n, int m)
{
    if(n==0)
        return m;
    if(m==0)
        return n;
    if(n==m)
        return n;
    if(n>m)
        return gcdAB(n-m, m);
    return gcdAB(n, m-n);
}
int Solution::cpFact(int A, int B) 
{
    int i,m = max(A,B);
    while(gcdAB(A,B)!=1)
    {
        A/=gcdAB(A,B);
    }
    return A;
}