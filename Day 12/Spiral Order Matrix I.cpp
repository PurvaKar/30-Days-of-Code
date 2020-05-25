vector<int> Solution::spiralOrder(const vector<vector<int> > &A) 
{
    int i,j,temp,len,k,val;
    len=A.size()*A[0].size()+1;
    vector<int> ans;
    val=1;
    for(i=0;val!=len && val<len;i++)
    {
        temp=j=i;
        for(j=i;j<(A[i].size()-i) && val<len;j++,val++)
            ans.push_back(A[i][j]);
        temp++;j--;
        for(;temp<(A.size()-i) && val<len;temp++,val++)
            ans.push_back(A[temp][j]);
        temp--;j--;
        for(;j>=i && val<len;j--,val++)
            ans.push_back(A[temp][j]);
        temp--;j++;
        for(;temp>i && val<len;temp--,val++)
            ans.push_back(A[temp][j]);
    }
    return ans;
}