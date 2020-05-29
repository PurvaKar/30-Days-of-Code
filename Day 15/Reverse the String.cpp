string Solution::solve(string A) 
{
    vector<string> s;
    long long int i, n,b=0;
    n=A.size();
    string dup= " ";
    for(i=0;i<n;i++)
    {
        if(A[i]!=' ')
        {
            dup+=A[i];
            if(i+1==n)
                s.push_back(dup);
        }
        else
        {
            b++;
            if(dup.size() != 0)
            {
                s.push_back(dup);
                dup=" ";
            }
            while(A[i+1]==' ')
            {
                i++;
            }
        }
    }
    if(b==0)
        return A;
    dup.clear();
    reverse(s.begin(), s.end());
    for(i=0;i<s.size();i++)
        dup += s[i];
    dup = dup.substr(1, dup.size()-1);
    return dup;
}