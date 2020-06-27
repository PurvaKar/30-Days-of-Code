vector<int> Solution::equal(vector<int> &A) 
{
    int i, j, x, y, n=A.size();
    map<int,vector<int>> hash;
    vector<vector<int>> res;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(hash.find(A[i]+A[j])==hash.end())
            {
                hash[A[i]+A[j]].push_back(i);
                hash[A[i]+A[j]].push_back(j);
            }
            else
            {
                x=hash[A[i]+A[j]][0];
                y=hash[A[i]+A[j]][1];
                if(x<i && y!=i && y!=j)
                    res.push_back({x,y,i,j});
            }
        }
    sort(res.begin(),res.end());
    return res[0];
}
