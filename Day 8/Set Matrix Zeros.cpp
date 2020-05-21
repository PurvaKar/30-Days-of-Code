void Solution::setZeroes(vector<vector<int> > &A) 
{
    int i,j,n,k,ii,jj;
    n=A.size();
    set<int, greater<int>> row,col;
    for(i=0;i<n;i++)
    {
        for(j=0;j<A[i].size();j++)
        {
            if(A[i][j]==0)
            {
                row.insert(i);
                col.insert(j);
            }
        }
    }
    set <int, greater <int> > :: iterator itr,itr2;
    for(itr=row.begin();itr!=row.end();itr++)
    {
        i=*itr;
        for(ii=0;ii<A[i].size();ii++)
            A[i][ii]=0;
    }
    n=A[0].size();
    for( itr2=col.begin();itr2!=col.end(); itr2++)
    {
        j=*itr2;
        for(ii=0;ii<A.size();ii++)
            A[ii][j]=0;
    }
}