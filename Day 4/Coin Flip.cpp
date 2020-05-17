#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int T,G,I,N,Q;
	cin>>T;
	while(T>0)
	{
	    cin>>G;
	    while(G>0)
	    {
	        cin>>I>>N>>Q;
	        if(N%2==0)
	        {
	            cout<<N/2<<"\n";
    	    }
    	    else
    	    {
    	        if(I==1)
    	        {
    	            if(Q==1)
        	            cout<<N/2<<"\n";
        	        else
        	            cout<<N/2+1<<"\n";
    	        }
    	        else
    	        {
    	            if(Q==1)
        	            cout<<N/2+1<<"\n";
        	        else
        	            cout<<N/2<<"\n";
    	        }
    	    }
	        G--;
	    }
	    T--;
	}
	return 0;
}
