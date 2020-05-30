string Solution::countAndSay(int A) 
{
    if(A==1)
        return "1";
    if(A==2)
        return "11";
    long long int i, j, n, c;
    string s="11";
    for(i=3;i<=A;i++)
    {
        s+="#";
        n= s.length();
        c=1;
        string t="";
        for(j=1;j<n;j++)
        {
            if(s[j]!=s[j-1])
            {
                t+=to_string(c);
                t+=s[j-1];
                c=1;
            }
            else
                c++;
        }
        s=t;
    }
    return s;
}