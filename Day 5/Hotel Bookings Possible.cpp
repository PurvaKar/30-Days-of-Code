bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    long long int rooms, i, n, j, come;
    n=arrive.size();
    vector<pair<int, int>> dt;
    vector<int> stay;
    for(i=0;i<n;i++)
        if(arrive[i]!=depart[i])
            dt.push_back(make_pair(arrive[i], 1));
    for(i=0;i<n;i++)
        if(arrive[i]!=depart[i])
            dt.push_back(make_pair(depart[i], 0));
    sort(dt.begin(), dt.end());
    come=rooms=0;
    for(i=0;come!=arrive.size() && i<dt.size();i++)
    {
        if(dt[i].second == 1)
        {
            come++;
            rooms++;
        }
        else
            rooms--;
        if(rooms>K)
            return false;
    }
    if(rooms>K)
        return false;
    return true;
}
