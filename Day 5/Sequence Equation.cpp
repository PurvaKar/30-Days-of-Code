vector<int> permutationEquation(vector<int> p) 
{
    long long int i,n,val;
    n=p.size();
    vector<int> y;
    map<int, int> occ;
    for(i=0;i<n;i++)
    {
        occ[p[i]]+=(i+1);
    }
    for(i=0;i<n;i++)
    {
        val=occ[occ[i+1]];
        y.push_back(val);
    }
    return y;
}