vector<vector<int> > Solution::anagrams(const vector<string> &A) 
{
    unordered_map<string, vector<int>> map;
    vector<vector<int>> ans;
    for(int i=0; i<A.size(); i++)
    {
        string t = A[i];
        sort(t.begin(), t.end());
        map[t].push_back(i+1);
    }
    for(auto itr=map.begin();itr!=map.end();itr++)
        ans.push_back(itr->second);
    return ans;
}
