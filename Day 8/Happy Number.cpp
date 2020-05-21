class Solution {
public:
    bool isHappy(int n) 
    {
        long long int d, s;
        while(n!=1 && n!=7)
        {
            if(n%10==n)
                return false;
            s=0;
            while(n!=0)
            {
                d=n%10;
                s+=(d*d);
                n=n/10;
            }
            n=s;
        }
        return true;
    }
};