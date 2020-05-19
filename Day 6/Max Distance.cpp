int Solution::maximumGap(const vector<int> &A) 
{
    int i, j, n, val, maxele;
    n=A.size();
    val=-INT_MIN;
    vector<pair<int, int>> vec;
    if(A.size()==1)
        return 0;
    if(A.size()==0)
        return -1;
    for(i=0;i<n;i++)
    {
        vec.push_back(make_pair(A[i], i));
    }
    sort(vec.begin(), vec.end());
    maxele=vec[n-1].second;
    for(j=n-2;j>=0;j--)
    {
        val = max(val, maxele-vec[j].second);
        maxele = max(maxele, vec[j].second);
    }
    if(val<0)
        return 0;
    return val;
}