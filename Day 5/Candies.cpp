long candies(int n, vector<int> arr) 
{
    int i,j;
    long long int nc=0;
    vector<int> candyl(n, 1), candyr(n, 1);
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            candyl[i]=candyl[i-1]+1;
    }
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
            candyr[i]=candyr[i+1]+1;
    }
    for(i=0;i<n;i++)
    {    
        nc+=max(candyl[i], candyr[i]);
    }
    return nc;
}