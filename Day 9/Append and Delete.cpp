string appendAndDelete(string s, string t, int k) 
{
    long long int lens,lent,i,diff;
    lens=s.size();
    lent=t.size();
    if(abs(lens-lent)>k)
        return "No";
    diff=s.size()-t.size();
    if(diff>=0)
    {
        for(i=0;i<lens;i++)
        {
            if(s[i]!=t[i] || i==lent)
                break;
        }
    if(i+1==lent)
        return "Yes";
    diff+=(2*(lent-i));
    if(diff<=k)
        return "Yes";
    }
    else
    {
        for(i=0;i<lens;i++)
            if(s[i]!=t[i])
                break;
        diff=(lens-i)+(lent-i);
        if(i>(k-diff) && diff!=k)
            diff+=(k-diff);
        if(diff==k)
                return "Yes";
    }
    return "No";
}