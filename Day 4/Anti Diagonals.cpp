vector<vector<int>> Solution::diagonal(vector<vector<int>> &A) 
{
    long long int i, j, n, k, ch;
    n=A.size();
    k=n-1;
    ch=0;
    vector<vector<int>> ans;
    for(i=0;i<(2*n)-1;i++)
    {
        vector<int> temp;
        if(ch==0)
        {
            for(j=0;j<n-k;j++)
            {
                temp.push_back(A[(n-k)-j-1][j]);
            }
            reverse(temp.begin(), temp.end());
        }
        else
        {
            for(j=0;j<n-k;j++)
            {
                temp.push_back(A[n-((n-k)-j-1)-1][n-j-1]);
            }
        }
        
        if(k==0)
        {
            ch=-1;
        }
        if(ch==-1)
            k++;
        else
            k--;
        ans.push_back(temp);
    }
    return ans;
}