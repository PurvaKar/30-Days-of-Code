int Solution::atoi(const string A) 
{
    long long int dup, i, j, n, ans;
    i=0;
    n=A.size();
    ans=0;
    while(A[i]==' ')
        i++;
    j=i;
    if(A[i]=='-' || A[i]=='+')
        i++;
    for(;i<A.size();i++)
    {
        if(A[i]=='1')
            ans=ans*10+1;
        else if(A[i]=='2')
            ans=ans*10+2;
        else if(A[i]=='3')
            ans=ans*10+3;
        else if(A[i]=='4')
            ans=ans*10+4;
        else if(A[i]=='5')
            ans=ans*10+5;
        else if(A[i]=='6')
            ans=ans*10+6;
        else if(A[i]=='7')
            ans=ans*10+7;
        else if(A[i]=='8')
            ans=ans*10+8;
        else if(A[i]=='9')
            ans=ans*10+9;
        else if(A[i]=='0')
            ans=ans*10+0;
        else
            break;
        if(A[j]=='-')
        {
            if((0-ans) < -2147483648)
                return -2147483648;
        }
        else
        {
            if(ans > 2147483647)
            return 2147483647;
        }
    }
    if(A[j]=='-')
    {
        ans = 0 - ans;
        if(ans < -2147483648)
            return -2147483648;
    }
    return ans;
}
