int Solution::solve(vector<int> &A, int B) 
{
    sort(A.begin(), A.end());
    map<int, int> occ;
    int i, j, n;
    n=A.size();
    for(i=0;i<n;i++)
        occ[A[i]]++;
    for(i=0,j=0;i<n;i++)
    {
        if(occ.find(A[i]^B)!=occ.end())
            j++;
    }
    return j/2;
}
