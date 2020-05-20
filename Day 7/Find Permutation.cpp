vector<int> Solution::findPerm(const string A, int B) 
{
    int j,n,d,i;
    vector<int> given;
    n=B-1;
    i=1;
    d=B;
    for(j=0;j<n;j++)
    {
        if(A[j]=='I')
        {
            given.push_back(i);
            i++;
        }
        else
        {
            given.push_back(d);
            d--;
        }
    }
    given.push_back(i);
    return given;
}