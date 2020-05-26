int Solution::findRank(string A) 
{
    string  B = A;
    long long int i,N,j,pos,ans = 0;
    long long int mod = 1000003;
    N=A.size();
    sort(B.begin(), B.end());
    int fact[53];
    fact[0] = 1;
    for(i=1; i<53; i++)
    {
        fact[i] = fact[i-1];
        fact[i] *= i;
        fact[i] %= mod;
    }
    for(i=0; i<N; i++)
    {
        pos = -1;
        for(j=0; j< B.size(); j++)
        {
            if(B[j] == A[i])
            {
                pos = j;
                break;
            }
            ans += fact[B.size()-1];
            ans %= mod;
        }
        B.erase(B.begin()+pos);
    }
    return (ans+1)%mod;
}
