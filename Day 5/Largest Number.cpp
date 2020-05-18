bool bignumcomp(string X, string Y)
{
    string XY = X;
    string YX = Y;
    X.append(Y);
    Y.append(XY);
    return X.compare(Y) > 0 ? true: false;
}

string Solution::largestNumber(const vector<int> &A) 
{
    vector<string> arr;
    long long int i,n,c1;
    n=A.size();
    string s="";
    c1=0;
    for(i=0;i<n;i++)
    {
        arr.push_back(to_string(A[i]));
        if(arr[i]=="0")
            c1++;
    }
    if(c1==n)
        return "0";
    sort(arr.begin(), arr.end(), bignumcomp);
    for(i=0;i<arr.size();i++)
        s.append(arr[i]);
    return s;
}