#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long int N, X, Y, i, j;
	cin>>N>>X>>Y;
	long long int A[N][2];
	for(i=0;i<N;i++)
	{
	    cin>>A[i][0]>>A[i][1];
	}
	long long int temp;
	vector<int> V, W;
	for(i=0;i<X;i++)
	{    
	    cin>>temp;
	    V.push_back(temp);
	}
	for(i=0;i<Y;i++)
	{    
	    cin>>temp;
	    W.push_back(temp);
	}
	sort(V.begin(), V.end());
	sort(W.begin(), W.end());
	vector<int>::iterator lower,upper;
	for(i=0;i<N;i++)
	{
	    upper = upper_bound (V.begin(), V.end(), A[i][0]);
	    if(upper==V.end())
	        A[i][0]=V[X-1];
	    else
	    {
	        if(upper-V.begin()-1 <0)
	            A[i][0]=-1;
	        else
	            A[i][0]=V[upper-V.begin()-1];
	    }
	    
	    lower = lower_bound (W.begin(), W.end(), A[i][1]); 
	    if(lower==W.end())
	        A[i][1]=-1;
	    else
	        A[i][1]=W[lower-W.begin()];
	}
    long long int diff = INT_MAX;
	for(i=0;i<N;i++)
	{
	    if(A[i][1]!= -1 && A[i][0]!=-1)
	        diff=min(A[i][1]-A[i][0]+1, diff);
	}
	cout<<diff<<"\n";
	return 0;
}
