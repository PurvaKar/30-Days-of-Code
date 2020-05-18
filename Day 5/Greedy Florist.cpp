int getMinimumCost(int k, vector<int> c) 
{
    int i, cost, inc, tk;
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    inc=0;
    cost=i=tk=0;
    while(i!=c.size())
    {
        tk=0;
        while(tk!=k && i!=c.size())
        {
            cost+=c[i++]*(inc+1);
            tk++;
        }
        inc++;
    }
    return cost;
}