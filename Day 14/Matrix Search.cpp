int Solution::searchMatrix(vector<vector<int> > &A, int B) 
{
    int i, j, n, m, low, high, mid;
    n=A.size();
    m=A[0].size();
    for(i=0;i<n;i++)   
    {
        if(B>=A[i][0] && B<=A[i][m-1])
        {
            if(B==A[i][0] || B==A[i][m-1])
                return 1;
            break;
        }
    }
    if(i==n)
        return 0;
    low = 0; 
    high = m-1;
    while(low<high)
    {
        mid = (high+low)/2;
        if(A[i][mid] == B)
            return 1;
        if(A[i][mid]<B)
            low = mid+1;
        else
            high = mid;
    }
    return 0;
}