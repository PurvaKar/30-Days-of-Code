vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) 
{
    map<int, int> occ1, occ2, occ3;
    int i, n;
    n=A.size();
    for(i=0;i<n;i++)
        occ1[A[i]]++;
    n=B.size();
    for(i=0;i<n;i++)
        occ2[B[i]]++;
    n=C.size();
    for(i=0;i<n;i++)
        occ3[C[i]]++;
    set<int> res;
    n=A.size();
    for(i=0;i<n;i++)
    {
        if(occ2.find(A[i])!=occ2.end() || occ3.find(A[i])!=occ3.end())
            res.insert(A[i]);
    }
    n=B.size();
    for(i=0;i<n;i++)
    {
        if(occ1.find(B[i])!=occ1.end() || occ3.find(B[i])!=occ3.end())
            res.insert(B[i]);
    }
    n=C.size();
    for(i=0;i<n;i++)
    {
        if(occ2.find(C[i])!=occ2.end() || occ1.find(C[i])!=occ1.end())
            res.insert(C[i]);
    }
    vector<int> ans;
    for(auto itr=res.begin();itr!=res.end();itr++)
        ans.push_back(*itr);
    return ans;
}
