bool compare(Interval a,Interval b)
{
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) 
{
    int  j, n, s, e;
    vector<Interval> ans; 
    Interval val;
    n=A.size();
    sort(A.begin(), A.end(), compare);
    s=A[0].start;
    e=A[0].end;
    vector<Interval>::iterator i;
    for(i=A.begin();i!=A.end();i++)
    {
        //cout<<i->start<<" "<< i->end <<" "<<s<<" "<<e<<endl;
        if(i->start <= e && i->start >= s )
        {
            if(i->end > e)
                e=i->end;
            if(i->start < s)
                s=i->start;
        }
        else
        {
            val.start=s;
            val.end=e;
            ans.push_back(val);
            s=i->start;
            e=i->end;
        }
    }
    if((i-1)->start <= e )
    {
        val.start=s;
        val.end=e;
        ans.push_back(val);
    }
    return ans;
    
}