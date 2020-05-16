#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long int T, N, a, b, c, i, sum;
    cin>>T;
    while(T>0)
    {
        cin>>N;
        a=1;
        b=2;
        if(N==1)
            cout<<"0"<<endl;
        else if(N==2)
            cout<<"2"<<endl;
        else 
        {
            sum=2;
            for(i=2,c=a+b;c<=N;i++)
            {
                if(c%2==0)
                    sum+=c;
                a=b;
                b=c;
                c=a+b;
            }
            cout<<sum<<endl;
        }
        
        T--;
    }  
    return 0;
}
