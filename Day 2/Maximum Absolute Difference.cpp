int Solution::maxArr(vector<int> &A) 
{
    int i, m1, m2, m3, m4;
    m1=m3=INT_MIN;
    m2=m4=INT_MAX;
    for(i=0;i<A.size();i++)
    {
        m1 = max(m1, A[i]+i);
        m2 = min(m2, A[i]+i);
        m3 = max(m3, A[i]-i);
        m4 = min(m4, A[i]-i);
    }
    return max(m1-m2, m3-m4);
}