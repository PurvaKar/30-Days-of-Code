#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	lli T, N, i;
	cin>>T;
	while(T>0)
	{
	    cin>>N;
	    if(N==1)
	    {
	        cout<<"1"<<"\n";
	        cout<<"1 1"<<"\n";
	    }
	    else
	    {
    	    if(N%2==0)
    	    {
    	        cout<<N/2<<"\n";
    	        i=1;
    	    }
    	    else
    	    {
    	        cout<<N/2<<"\n";
    	        cout<<"3 1 2 3"<<"\n";
    	        i=4;
    	    }
    	    for(;i<=N;i+=2)
    	        cout<<"2 "<<i<<" "<<i+1<<"\n";
	    }
	    
	    T--;
	}
}
