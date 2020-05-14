int pageCount(int n, int p) 
{
    if(n%2==0)
    {
        if(p%2!=0)
            --p;
    }
    else
    {
        if(p%2==0)
            p++;
    }
    return min(p/2, (n-p)/2);
}