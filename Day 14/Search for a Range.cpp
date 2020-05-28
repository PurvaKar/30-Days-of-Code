vector<int> Solution::searchRange(const vector<int> &A, int B)
{
    std::vector<int>::iterator low, high; 
    vector<int> ans,AA=A;
    low = lower_bound(AA.begin(), AA.end(), B);
    high = lower_bound(AA.begin(), AA.end(), B+1);
    int a=low-AA.begin();
    int b=high-AA.begin();
    if(a<b)
    {
        ans.push_back(a);
        ans.push_back(b-1);
        return ans;
    }
    else
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
}