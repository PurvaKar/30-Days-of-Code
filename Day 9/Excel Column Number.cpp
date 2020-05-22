int Solution::titleToNumber(string A) 
{
    int i,col,k;
    char c;
    map<char, int> occ;
    for(i=1, c='A';i<=26;i++, c++)
        occ[c]=i;
    col=k=0;
    for(i=A.length()-1,k=0;i>=0;i--, k++)
    {
        col += pow(26, k)*occ[A[i]];
    }
    return col;
}