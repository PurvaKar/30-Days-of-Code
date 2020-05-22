vector<int> Solution::primesum(int A) 
{
    long long int n, i, j;
    n = (A-2)/2;
    vector<bool> marked(n+1, false);
    vector<int> primes,ans;
    for(i=1;i<=n;i++)
        for(j=i;(i+j+2*i*j)<=n;j++)
            marked[i+j+2*i*j]=true;
    if(A>2)
    {    
        primes.push_back(2);
        primes.push_back(2);
    }
    for(i=1;i<=n;i++)
        if(marked[i]==false)
        {    
            primes.push_back(2*i+1);
            primes.push_back(2*i+1);
        }
    i=0;j=primes.size()-1;
    while(i<j)
    {
        if(primes[i]+primes[j]==A)
        {
            ans.push_back(primes[i]);
            ans.push_back(primes[j]);
            break;
        }
        if(primes[i]+primes[j]<A)
            i++;
        else
            j--;
    }
    return ans;
}