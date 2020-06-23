set<vector<int> > s;
vector<vector<int>> res;
int sumtemp(vector<int> temp)
{
    int sum=0;
    for(int i =0;i<temp.size();i++)
        sum+=temp[i];
    return sum;
}
void sumtoB(vector<int> A, int B, int i, vector<int> temp)
{
    if(i==A.size())
    {
        if(temp.size()==0)
            return;
        int sum = sumtemp(temp);
        sort(temp.begin(), temp.end());
        if(sum==B)
            s.insert(temp);
        return;
    }
    sumtoB(A, B, i+1, temp);
    temp.push_back(A[i]);
    sumtoB(A, B, i+1, temp);
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) 
{
    s.clear();
    res.clear();
    sumtoB(A, B, 0, vector<int>());
    for(auto it=s.begin(); it!=s.end(); it++)
        res.push_back(*it);
    return res;
}
