int Solution::isPower(int A) 
{
    if(A==1)
        return 1;
    int i, p, y;
    for(i=2;i<=sqrt(A);i++)
    {
        y=2;
        p=pow(i,y);
        while(p<=A && p>0)
        {
            if(p==A)
                return 1;
            y++;
            p=pow(i,y);
        }
    }
    return 0; 
}