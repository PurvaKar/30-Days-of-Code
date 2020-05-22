#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int N, M, i, num;
	cin>>N>>M;
	vector<pair<long long int, long long int>> A,B;
	for(i=0;i<N;i++)
	{
	    cin>>num;
	    A.push_back(make_pair(num, i));
	}
	for(i=0;i<M;i++)
	{
	    cin>>num;
	    B.push_back(make_pair(num, i));
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	num=A[0].second;
	for(i=0;i<M;i++)
	    cout<<num<<" "<<B[i].second<<endl;
	num=B[M-1].second;
	for(i=1;i<N;i++)
	    cout<<A[i].second<<" "<<num<<endl;
	return 0;
}