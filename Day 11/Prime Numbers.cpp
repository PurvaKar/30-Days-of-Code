vector<int> Solution::sieve(int A) 
{
    int n = (A-2)/2;
    int i,j,c;
    c=0;
    vector<int> primes;
    vector<bool> marked(n+1, false);
    for(i=1;i<=n;i++)
    {
        for(j=1;(i+j+2*i*j)<=n;j++)
            marked[i+j+2*i*j]=true;
    }
    if(A>2)
        primes.push_back(2);
    for(i=1;i<=n;i++)
        if(marked[i]==false)
            primes.push_back(2*i+1);
    for(i=1;i<=sqrt(A);i++)
        if(A%i==0)
            c++;
    if(c==1)
        primes.push_back(A);
    return primes;
}