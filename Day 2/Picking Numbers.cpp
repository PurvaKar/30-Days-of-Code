int pickingNumbers(vector<int> a) 
{
    int i, max1, max2, n, j;
    n=a.size();
    map<int, int> occ;
    sort(a.begin(), a.end());
    for(i=0;i<n;i++)
        occ[a[i]]++;
    max1=max2=0;
    vector<int> ans;
    for(auto itr= occ.begin();itr!=occ.end();itr++)
    {
        ans.push_back(itr->first);
        if(itr->second>max2)
            max2=itr->second;
    }
    sort(ans.begin(), ans.end());
    for(i=1;i<ans.size();i++)
    {
        if(ans[i]-ans[i-1] == 1)
        {
            max1=occ[ans[i]]+occ[ans[i-1]];
        }
        max2=max(max2, max1);
    }
    return max2;
}