#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long int T,N,a,b,c,m;
    cin>>T;
    while(T>0)
    {
        cin>>N;
        N--;
        m=N/3;
        a=3*(m*(m+1))/2;
        m=N/5;
        b=5*(m*(m+1))/2;
        m=N/15;
        c=15*(m*(m+1))/2;
        cout<<((a+b)-c)<<endl;
        T--;
    } 
    
    return 0;
}