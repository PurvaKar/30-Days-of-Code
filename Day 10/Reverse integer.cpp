int Solution::reverse(int A) 
{
    long long int ans,dup;
    string s; 
    if(A<0)
    {
        s+="-";
        dup=0-A;
    }
    else
        dup=A;
    while(dup!=0)
    {
        s+=to_string(dup%10);
        dup/=10;
    }
    dup = stoll(s);
    if(dup<-2147483648 || dup>2147483647)
        return 0;
    return dup;
}