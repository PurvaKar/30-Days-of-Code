#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int i,N,M,c;
	cin>>N>>M;
	string chef,cnty;
	map<string, long long int> chefname, country;
	vector<pair<string, string>> chefcountry;
	for(i=0;i<N;i++)
	{
	    cin>>chef>>cnty;
	    chefcountry.push_back(make_pair(chef, cnty));
	}
	for(i=0;i<M;i++)
	{
	    cin>>chef;
	    chefname[chef]++;
	}
	for(i=0;i<N;i++)
	{
	    if(chefname.find(chefcountry[i].first) != chefname.end())
	        country[chefcountry[i].second]+=chefname[chefcountry[i].first];
	        
	}
	c=0;
	for(auto itr=country.begin();itr!=country.end();itr++)
	{
	    if(itr->second > c)
	    {
	        c=itr->second;
	        cnty=itr->first;
	    }
	}
	cout<<cnty<<endl;
	c=0;
	for(auto itr=chefname.begin();itr!=chefname.end();itr++)
	{
	    if(itr->second > c)
	    {
	        c=itr->second;
	        chef = itr->first;
	    }
	}
	cout<<chef<<endl;
	return 0;
}