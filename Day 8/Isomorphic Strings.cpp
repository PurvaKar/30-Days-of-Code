class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char, char> occ,occ1;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(occ.find(s[i]) == occ.end() && occ1.find(t[i])==occ1.end())
            {
                occ[s[i]]=t[i];
                occ1[t[i]]=s[i];
            }    
            else
            {
                if(occ[s[i]]!=t[i] || occ1[t[i]]!=s[i])
                    return false;
            }
        }
        return true;
    }
};