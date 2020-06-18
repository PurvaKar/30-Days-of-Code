vector<int> Solution::prevSmaller(vector<int> &A) 
{
    int i,n=A.size();
    stack<int> s;
    vector<int> G(n,-1);
    
    for(i=0;i<n;i++)
    {
         while(!s.empty() && s.top()>=A[i])
        {
           s.pop();
        }
        if(!s.empty())
            G[i]=s.top();
        s.push(A[i]);
    }
    return G;
}
