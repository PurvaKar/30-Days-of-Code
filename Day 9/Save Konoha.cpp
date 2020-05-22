#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int T,N,Z,i,val, num;
	cin>>T;
	while(T>0)
	{
	    cin>>N>>Z;
	    priority_queue<long long int> A; 
	    for(i=0;i<N;i++)
	    {
	        cin>>val;
	        A.push(val);
	    }
	    
	    val=i=0;
	    while(Z>0 && !A.empty())
	    {
	        num=A.top();
	        A.pop();
	        Z-=num;
	        num=num/2;
	        if(num!=0)
	            A.push(num);
	        val++;
	    }
	    if(A.size()==0)
	        cout<<"Evacuate"<<endl;
	    else
	        cout<<val<<endl;
	    T--;
	}
	return 0;
}
