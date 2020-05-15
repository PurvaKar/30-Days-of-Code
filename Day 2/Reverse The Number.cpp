#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int T,N;
	cin>>T;
	while(T>0)
	{
	    cin>>N;
	    string s = to_string(N);
	    reverse(s.begin(), s.end());
	    N= stoi(s);
	    cout<<N<<endl;
	    T--;
	}
	return 0;
}