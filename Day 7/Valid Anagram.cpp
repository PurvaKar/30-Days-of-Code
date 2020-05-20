class Solution
{
public:
    bool isAnagram(string s, string t) 
    {
        map<char, int> a,b;
        int i;
        if(s.length()!=t.length())
            return false;
        for(i=0;i<s.length();i++)
            a[s[i]]++;
        for(i=0;i<t.length();i++)
            b[t[i]]++;
        for(i=0;i<s.length();i++)
            if(a[s[i]]!=b[s[i]])
                return false;
        return true;
    }
};