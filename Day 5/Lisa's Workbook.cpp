int workbook(int n, int k, vector<int> arr) 
{
    int i, sp, temp_k, s;
    vector<int> start;
    vector<int> end;
    for(i=0;i<n;i++)
    {
        s=1;
        temp_k=0;
        while(temp_k<arr[i])
        {
            start.push_back(s);
            temp_k+=k;
            if(temp_k<=arr[i])
            {    
                end.push_back(temp_k);
                s=temp_k+1;
            }
            else
                end.push_back(arr[i]);
        }
    }
    sp=0;
    for(i=0;i<start.size();i++)
    {
        if((i+1)>=start[i] && (i+1)<=end[i])
            sp++;
    }
    return sp;
}