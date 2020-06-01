vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) 
{
    int i,j;
    vector<int> ans;
    for(i=0,j=0;i<A.size() && j<B.size();)
    {
        if(A[i]==B[j])
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else
        {
            while(A[i]!=B[j] && i<A.size() && j<B.size())
            {
                if(A[i]<B[j])
                    i++;
                else
                    j++;
            }
        }
    }
    return ans;
}