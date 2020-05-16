#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, N, i, currsum, res, sum, total;
    cin>>T;
    while(T>0)
    {
        cin>>N;
        long long int A[N];
        unordered_map<long long int, long long int> occ;
        for(i=0;i<N;i++)
            cin>>A[i];
        total=N*(N+1) / 2;
        for(i=0;i<N;i++)
        {
            if(A[i]%2!=0)
                A[i]=0;
            else if(A[i]%4!=0)
                A[i]=1;
            else
                A[i]=2;
        }
        res=currsum=0;
        sum=1;
        for(i=0;i<N;i++)
        {
            currsum+=A[i];
            if(currsum==sum)
                res++;
            if(occ.find(currsum-sum) != occ.end())
                res+=occ[currsum-sum];
            occ[currsum]++;
        }
        cout<<total-res<<endl;
        T--;
    }
    return 0;
}