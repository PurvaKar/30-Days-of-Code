void bonAppetit(vector<int> bill, int k, int b) 
{
    int i,total,n;
    n=bill.size();
    total=0;
    for(i=0;i<n;i++)
    {
        if(i!=k)
            total+=bill[i];
    }
    total/=2;
    if(b==total)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<b-total<<endl;

}