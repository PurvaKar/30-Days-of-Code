vector<vector<int> > Solution::generateMatrix(int A) 
{
    long long int ans[A][A];
    long long int i, ii, temp, k, val;
    k=val=1;
    for(i=0;val!=A*A+1;i++, k++)
    {
        temp=i;
        for(ii=i;ii<=A-k;ii++, val++)
            ans[i][ii]=val;
        temp++;ii--;
        for(;temp<=A-k;temp++, val++)
            ans[temp][ii]=val;
        ii--;temp--;
        for(;ii>=i;ii--, val++)
            ans[temp][ii]=val;
        ii++;temp--;
        for(;temp>i;temp--, val++)
            ans[temp][ii]=val;
    }
    vector<vector<int>> res;
    
    for(i=0;i<A;i++)
    {
        vector<int> t;
        for(ii=0;ii<A;ii++)
        {
            t.push_back(ans[i][ii]);
        }
        res.push_back(t);
    }
    return res;
}