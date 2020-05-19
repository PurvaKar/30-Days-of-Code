vector<int> closestNumbers(vector<int> arr) 
{
    int diff, i, n, j;
    n=arr.size();
    diff=INT_MAX;
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for(i=0;i<n-1;i++)
    {
        diff = min(diff, abs(arr[i+1]-arr[i]));
    }
    for(i=0;i<n-1;i++)
        if(abs(arr[i+1]-arr[i]) == diff)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[i+1]);
        }
    return ans;
}