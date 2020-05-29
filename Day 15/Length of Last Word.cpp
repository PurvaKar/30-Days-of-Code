int Solution::lengthOfLastWord(const string A) 
{
    long long int i,k, j,b;
    j=b=0;
    for(i=0;i<A.size();i++)
    {
        if(A[i]==' ')
        {
            b++;
            k = j;
        }
        else
        {
            if(A[i-1]==' ')
                j=0;
            j++;
        }
    }
    if(A[A.size()-1]!= ' ')
        k=j;
    if(b==0)
        return A.size();
    return k;
}