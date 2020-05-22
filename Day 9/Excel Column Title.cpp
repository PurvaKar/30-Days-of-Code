string Solution::convertToTitle(int A) 
{
    int i,k;
    char c='A';
    map<int, char> occ;
    for(i=1;i<26;i++,c++)
        occ[i]=c;
    occ[0]=c;
    string str;
    while(A>0)
    {
        str+=occ[A%26];
        if(A%26==0)
            A=A/26-1;
        else
            A=A/26;
    }
    reverse(str.begin(), str.end());
    return str;
}