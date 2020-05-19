int lilysHomework(vector<int> arr) 
{
    int i, n, c, index, c1;
    n=arr.size();
    vector<int> a = arr;
    vector<int> temp_arr = arr;
    map<int, int> occ;
    sort(a.begin(), a.end());
    c1=c=0;
    map<int, int> occ1;
    for(i=0;i<n;i++)
    {    
        occ[arr[i]]=i;
        occ1[arr[i]]=i;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=a[i])
        {
            c++;
            index = occ[a[i]];
            occ[arr[i]]=index;
            arr[index] = arr[i];
            arr[i] = a[i]; 
        }
    }
    reverse(a.begin(), a.end());
    for(i=0;i<n;i++)
    {
        if(temp_arr[i]!=a[i])
        {
            c1++;
            index = occ1[a[i]];
            occ1[temp_arr[i]]=index;
            temp_arr[index] = temp_arr[i];
            temp_arr[i] = a[i]; 
        }
    }
    return min(c, c1);
}