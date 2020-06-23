vector<vector<int>> res;
set<vector<int>> s;
void find(vector<int> &A, int index, vector<int> temp)
{
    if(index==A.size())
    {
        sort(temp.begin(), temp.end());
        s.insert(temp);
        return;
    }
    find(A, index+1, temp);
    temp.push_back(A[index]);
    find(A, index+1, temp);
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) 
{
    s.clear();
    res.clear();
    find(A, 0, vector<int>());
    for(auto it=s.begin(); it!=s.end(); it++)
        res.push_back(*it);
    return res;
}