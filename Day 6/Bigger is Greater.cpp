string biggerIsGreater(string w) 
{
    int i, n;
    n=w.length();
    string s=w;
    while(next_permutation(s.begin(), s.end()))
    {
        if(s>w)
            return s;
    }    
    return "no answer";
}