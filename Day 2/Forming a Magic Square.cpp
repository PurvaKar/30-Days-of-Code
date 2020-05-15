bool is_magic_square(vector<int> vec)
{
    int i,j,sum,temp,ds1,ds2;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=vec[(3*i)+j];
        }
    }
    ds1=ds2=sum=0;
    for(i=0;i<3;i++)
        sum+=arr[0][i];
    for(i=0;i<3;i++)
    {
        for(j=0,temp=0;j<3;j++)
            temp+=arr[i][j];
        if(temp!=sum)
            return false;
        for(j=0,temp=0;j<3;j++)
            temp+=arr[j][i];
        if(temp!=sum)
            return false;
        ds1+=arr[i][i];
        ds2+=arr[2-i][i];
    }
    if(ds1!=sum || ds2!=sum)
        return false;
    return true;
}
int check(vector<int> a, vector<int> b)
{
    int i,diff=0;
    for(i=0;i<a.size();i++)
        diff+=abs(a[i]-b[i]);
    return diff;
}
int formingMagicSquare(vector<vector<int>> s) 
{
    int i,j,n,ans;
    ans=INT_MAX;
    vector<int> v;
    vector<int> vec(9);
    vector<vector<int>> magicsquares;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            v.push_back(s[i][j]);
    }
    for(i=0;i<9;i++)
        vec[i]=i+1;
    vector<int> temp_vec = vec;
    bool choice;
    do
    {
        if(is_magic_square(vec))
        {
            magicsquares.push_back(vec);
        }
        choice=next_permutation(vec.begin(), vec.end());
    }while(choice);
    for(i=0;i<magicsquares.size();i++)
    {
        ans=min(ans, check(v, magicsquares[i])); 
    }
    return ans;
}