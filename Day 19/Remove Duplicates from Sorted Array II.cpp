int Solution::removeDuplicates(vector<int> &A) 
{
    long long int i,j,c,n,num;
    n=A.size();
    j=0;
    num=A[0];
    c=1;
    for(i=1;i<n;i++)
    {
        if(A[i]==num)
        {
            if(c<2)
            {
                c++;
                A[++j]=A[i];
            }
        }
        else
        {
            c=1;
            num=A[i];
            A[++j]=A[i];
        }
    }
    return j+1;
}