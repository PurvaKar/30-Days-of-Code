#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int T,N,M,K,r,c,i;
	cin>>T;
	while(T>0)
	{
	    cin>>N>>M>>K;
	    set<pair<long long int, long long int>> A;
	    for(i=0;i<K;i++)
	    {
	        cin>>r>>c;
	        A.insert({r-1, c-1});
	    }
	    i=0;
	    for(auto itr=A.begin();itr!=A.end();itr++)
	    {
	        r=itr->first;
	        c=itr->second;
	        i+=4;
	        if(A.find({r-1, c}) != A.end())
	            i--;
	        if(A.find({r+1, c}) != A.end())
	            i--;
	        if(A.find({r, c-1}) != A.end())
	            i--;
	        if(A.find({r, c+1}) != A.end())
	            i--;
	    }
	    cout<<i<<endl;
	    T--;
	}
	return 0;
}