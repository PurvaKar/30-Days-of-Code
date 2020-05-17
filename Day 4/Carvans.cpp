#include <iostream>
using namespace std;

int main() 
{
	long long int T,N,i,c,high;
	cin>>T;
	while(T>0)
	{
	    cin>>N;
	    c=1;
	    long long int A[N];
	    for(i=0;i<N;i++)
	        cin>>A[i];
	    high=A[0];
	    for(i=1;i<N;i++)
	        if(A[i]<=high)
	        {
	            c++;
	            high=A[i];
	        }
	    cout<<c<<endl;
	    T--;
	}
	return 0;
}
