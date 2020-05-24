vector<int> Solution::allFactors(int A) 
{
    vector<int> factors;
    int i;
    for(i=1;i<=sqrt(A);i++)
    {
        if(A%i==0)
        {
            if(A/i == i)
                factors.push_back(i);
            else
            {
                factors.push_back(i);
                factors.push_back(A/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}