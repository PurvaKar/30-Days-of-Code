string Solution::longestPalindrome(string A) 
{
    long long int i, j, n, l;
    n = A.size();
    string str;
    l=0;
    for(i=0;i<n;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            string r,s;
            s=A.substr(i,j);
            r=s;
            reverse(r.begin(), r.end());
            if(r==s)
            {
                if(l<r.size())
                {
                    l=s.size();
                    str = s;
                    break;
                }
                
            }
            if(r.size()<=l)
                break;
        }
    }
    if(l==0 || l==1)
        str=A[0];
    return str;
}