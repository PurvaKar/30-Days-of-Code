#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    long long int T, N, i,ans;
    cin>>T;
    while(T>0)
    {
        cin>>N;
        while(N%2==0)
        {
            ans=2;
            N=N/2;
        }
        for(i=3;i<=sqrt(N);i+=2)
        {
            while(N%i==0)
            {    
                ans=i;
                N=N/i;
            }
        }
        if(N>2)
            cout<<N<<endl;
        else
            cout<<ans<<endl;
        T--;
    }
    return 0;
}
