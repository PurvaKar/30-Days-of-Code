vector<vector<int> > Solution::solve(int A) 
{
    int row,col;
    vector<vector<int>> res;
    int ans[A][A]={};
    ans[0][0]=1;
    for(row=1;row<A;row++)
    {
        ans[row][0]=1;
        for(col=1;col<=row;col++)
        {
            ans[row][col]=ans[row-1][col]+ans[row-1][col-1];
        }
    }
    for(row=0;row<A;row++)
    {
        vector<int> temp;
        for(col=0;col<=row;col++)
        {
            temp.push_back(ans[row][col]);
        }
        res.push_back(temp);
    }
    return res;
}