int beautifulDays(int a, int b, int k) 
{
    int i,j,ra,diff,c;
    c=0;
    for(i=a;i<=b;i++)
    {
        string s= to_string(i);
        reverse(s.begin(), s.end());
        ra=stoi(s);
        diff=abs(ra-i);
        if(diff%k==0)
            c++;
    }
    return c;
}