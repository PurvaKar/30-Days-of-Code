int Solution::diffPossible(const vector<int> &A, int B) 
{
    unordered_map<int,int> occ;
    for(int i=0;i<A.size();i++)
    {
        int a=B+A[i],b=A[i]-B;
        if(occ.find(a)!=occ.end())
            return 1;
        if(occ.find(b)!=occ.end())
            return 1;
        occ[A[i]]=1;
    }
    return 0;
}
