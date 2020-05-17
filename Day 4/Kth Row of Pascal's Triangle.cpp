vector<int> Solution::getRow(int A) 
{
    long long int row,col;
    long long int arr[A+1][A+1]={};
    arr[0][0]=1;
    for(row=1;row<=A;row++)
    {
        arr[row][0]=1;
        for(col=1;col<=row;col++)
        {
            arr[row][col]=arr[row-1][col]+arr[row-1][col-1];
        }
    }
    vector<int> ans;
    for(row=A,col=0;col<=A;col++)
        ans.push_back(arr[row][col]);
    return ans;
}