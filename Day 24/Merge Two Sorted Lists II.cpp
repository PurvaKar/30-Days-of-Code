void Solution::merge(vector<int> &A, vector<int> &B) 
{
    long long int i, j, m, n;
    m=A.size();
    n=B.size();
    vector<int> C;
    for(i=0,j=0;i<m && j<n;)
    {
        if(A[i]<B[j])
        {
            C.push_back(A[i]);
            i++;
        }
        else
        {
            C.push_back(B[j]);
            j++;
        }
    }
    if(i!=m)
        for(;i<m;i++)
            C.push_back(A[i]);
    if(j!=n)
        for(;j<n;j++)
            C.push_back(B[j]);
    A=C;
}
