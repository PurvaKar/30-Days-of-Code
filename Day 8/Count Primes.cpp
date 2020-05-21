class Solution 
{
public:
    int countPrimes(int n) 
    {
        int new_n = (n-2)/2;
        long long int i,j,c=0;
        vector<bool> marked(new_n+1, false);
        for(i=1;i<=new_n;i++)
            for(j=i;(i+j+2*i*j)<=new_n;j++)
                marked[i+j+2*i*j]=true;
        if(n>2)
            c++;
        for(i=1;i<=new_n;i++)
            if(marked[i]==false)
                c++;
        return c;
    }
};