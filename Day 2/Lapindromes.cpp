#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int T, i, j, n;
	cin>>T;
	while(T>0)
	{
	    string s;
	    cin>>s;
	    n = s.length();
	    if(n%2!=0)
	        j=(n/2)+1;
	    else
	        j=n/2;
	    map<char, int> m1, m2;
	    for(i=0;i<n/2;i++)
	        m1[s[i]]++;
	    for(;j<n;j++)
	        m2[s[j]]++;
	    if(n%2!=0)
	        j=(n/2)+1;
	    else
	        j=n/2;
	    for(i=0;i<n/2;i++,j++)
	    {
	        if(m2.find(s[i]) == m2.end() || m2[s[i]]!=m1[s[i]])
	            break;
	        if(m1.find(s[j]) == m1.end() || m1[s[j]]!=m2[s[j]])
	            break;
	    }
	    if(i==n/2)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	   
	    T--;
	}
	return 0;
	return 0;
}
