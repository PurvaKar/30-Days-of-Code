int Solution::solve(vector<string> &A) 
{
    long long int i, len;
    len=A.size();
    float a,b,c,num,sum=0;
    a=stof(A[0]);
    b=stof(A[1]);
    c=stof(A[2]);
    for(i=3;i<len;i++)
    {
        num=stof(A[i]);
        if(a+b+c>1 && a+b+c<2)
            return 1;
        else if(a+b+c>2)
        {
            if(a>b && a>c)
                a=num;
            else if (b>a && b>c)
                b=num;
            else
                c=num;
        }
        else
        {
            if(a<b && a<c)
                a=num;
            else if (b<a && b<c)
                b=num;
            else
                c=num;
        }
    }
    if(a+b+c>1 && a+b+c<2)
        return 1;
    return 0;
}
