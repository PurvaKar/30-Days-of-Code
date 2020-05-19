int marsExploration(string s) 
{
    int i, c=0;
    for(i=0;i<s.length();i+=3)
    {
        if(s[i]!='S')
             c++;
        if(s[i+1]!='O')
            c++;
        if(s[i+2]!='S')
            c++;
    }
    return c;
}