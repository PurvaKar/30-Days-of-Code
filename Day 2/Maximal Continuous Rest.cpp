#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, ch, c, f, l, ans;
    cin>>n;
    long long int A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    ans=c=0;
    ch=-1;
    f=l=0;
    for(i=0;i<n;i++)
    {
        if(i==0 && A[i]==1)
            ch=0;
        if(A[i]==1)
        {
            c++;
            if(i==(n-1))
                l=c;
        }
        else
        {
            if(ch==0)
            {
                f=c;
                ch++;
            }
            ans=max(ans, c);
            c=0;
        }
    }
    ans=max(ans, f+l);
    cout<<ans<<endl;
    return 0;
}