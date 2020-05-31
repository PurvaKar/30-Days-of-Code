string Solution::intToRoman(int A) 
{
    string s,ans;
    char c, f, t;
    s = to_string(A);
    int len=s.size();
    int i,j;
    for(i=len-1,j=1;i>=0;i--, j++)
    {
        if(j==1)
        {
            c='I';
            f='V';
            t='X';
        }
        else if(j==2)
        {
            c='X';
            f='L';
            t='C';
        }
        else if(j==3)
        {
            c='C';
            f='D';
            t='M';
        }
        else if(j==4)
        {
            c='M';
        }
        
        if(s[i]=='1')
            ans+=c;
        else if(s[i]=='2')
        {
            ans+=c; 
            ans+=c;
        }
        else if(s[i]=='3')
        {
            ans+=c; 
            ans+=c;
            ans+=c;
        }
        else if(s[i]=='4')
        {
            ans+=f;
            ans+=c;
        }
        else if(s[i]=='5')
        {
            ans+=f;
        }
        else if(s[i]=='6')
        {
            ans+=c;
            ans+=f;
        }
        else if(s[i]=='7')
        {
            ans+=c;
            ans+=c;
            ans+=f;
        }
        else if(s[i]=='8')
        {
            ans+=c;
            ans+=c;
            ans+=c;
            ans+=f;
        }
        else if(s[i]=='9')
        {
            ans+=t;
            ans+=c;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
