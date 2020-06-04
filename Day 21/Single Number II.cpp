int Solution::singleNumber(const vector<int> &A) 
{
    int res=0;
    for(int i=0; i<32; i++)
    {
        int x = 1<<i, sum = 0;
        
        for(auto j: A)
            sum += ((j&x)? 1: 0);
        
        if(sum%3)
            res = res | x;
    }
    return res;
}
