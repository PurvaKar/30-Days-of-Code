int Solution::repeatedNumber(const vector<int> &A) 
{
    int i,k = A.size()/3;
    int first,second, c1,c2;
    c1=c2=0;
    first=second=INT_MAX;
    for(i=0;i<A.size();i++)
    {
        if(first==A[i])
            c1++;
        else if(second==A[i])
            c2++;
        else if(c1==0)
        {
            c1++;
            first=A[i];
        }
        else if(c2==0)
        {
            c2++;
            second=A[i];
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1=c2=0;
    for(i=0;i<A.size();i++)
    {
        if(A[i]==first)
            c1++;
        else if(A[i]==second)
            c2++;
    }
    if(c1>k)
        return first;
    if(c2>k)
        return second;
    return -1;
}