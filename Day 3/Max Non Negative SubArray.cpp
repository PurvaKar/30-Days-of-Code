vector<int> Solution::maxset(vector<int> &A) 
{
    long long int start, i, n, s, e, sum, k, fs, fe;
    n=A.size();
    start=sum=0;
    k=s=e=0;
    fs=fe=-1;
    for(i=0;i<n;i++)
    {
        if(start+A[i]>=start)
        {
            start+=A[i];
            e=i;
            if(i==n-1)
            {
                if(sum<start)
                {
                    sum=start;
                    fs=s;
                    fe=e;
                }
                if(sum==start)
                {
                    if((fe-fs)<(e-s))
                    {
                        fs=s;
                        fe=e;
                    }
                }
            }
        }
        else
        {
            if(sum<start)
            {
                sum=start;
                fs=s;
                fe=e;
            }
            if(sum==start)
            {
                if((fe-fs)<(e-s))
                {
                    fs=s;
                    fe=e;
                }
            }
            start=0;
            s=i+1;
        }
    }
    vector<int> ans;
    if(fs==-1)
        return ans;
    for(i=fs;i<=fe;i++)
        ans.push_back(A[i]);
    return ans;
}