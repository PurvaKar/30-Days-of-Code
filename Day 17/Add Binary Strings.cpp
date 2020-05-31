string Solution::addBinary(string A, string B) 
{
    long long int i,j,n,m;
    char a, b, c;
    string ans;
    n=A.size();
    m=B.size();
    c='0';
    for(i=n-1,j=m-1;i>=0 && j>=0;i--,j--)
    {
        a = A[i];
        b = B[j];
        if(a=='0' && b=='0')
        {
            if(c=='0')
                ans+='0';
            else
            {
                ans+='1';
                c='0';
            }
        }
        else if(a=='1' && b=='0')
        {
            if(c=='0')
                ans+='1';
            else
                ans+='0';
        }
        else if(a=='0' && b=='1')
        {
            if(c=='0')
                ans+='1';
            else
                ans+='0';
        }
        else if(a=='1' && b=='1')
        {
            if(c=='0')
            {
                ans+='0';
                c='1';
            }
            else
            {
                ans+='1';
                c='1';
            }
        }
    }
    if(n<m)
    {
        for(;j>=0;j--)
        {
            b = B[j];
            if( b=='0')
            {
                if(c=='0')
                    ans+='0';
                else
                {
                    ans+='1';
                    c='0';
                }
            }
            else if( b=='1')
            {
                if(c=='0')
                    ans+='1';
                else
                {
                    ans+='0';
                    c='1';
                }
            }
        }
    }
    else
    {
        for(;i>=0;i--)
        {
            b = A[i];
            if( b=='0')
            {
                if(c=='0')
                    ans+='0';
                else
                {
                    ans+='1';
                    c='0';
                }
            }
            else if( b=='1')
            {
                if(c=='0')
                    ans+='1';
                else
                {
                    ans+='0';
                    c='1';
                }
            }
        }
    }
    if(c=='1')
        ans+=c;
    reverse(ans.begin(), ans.end());
    return ans;
}