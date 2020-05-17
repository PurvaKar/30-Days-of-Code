#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int T, rank, severity, activity, redeem, laddus, bonus;
	string act, origin;
	cin>>T;
	while(T>0)
	{
	    cin>>activity>>origin;
	    bonus=laddus=0;
	    while(activity>0)
	    {
	        cin>>act;
	        bonus=0;
	        if(act == "CONTEST_WON")
	        {
	            cin>>rank;
    	        if(rank<20)
    	            bonus=20-rank;
    	        laddus+=(300+bonus);
	        }
	        else if(act == "TOP_CONTRIBUTOR")
	            laddus+=300;
	        else if(act  == "BUG_FOUND")
	        {    
	            cin>>severity;
	            if(severity>=50 && severity<=1000)
	                laddus+=severity;
	        }
	        else if(act == "CONTEST_HOSTED")
	            laddus+=50;
	       else{}
	        activity--;
	    }
	    if(origin == "INDIAN")
	        redeem=200;   
	    else
	        redeem=400;
	    cout<<laddus/redeem<<endl;
	    T--;
	}
	return 0;
}
