class Solution 
{
public:
    int calculate(string s) 
    {
        long long int i,a,n,b,c, k,temp, val;
        n=s.size();
        vector<long long int> num;
        vector<char> op;
        for(i=0;i<n;i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
                op.push_back(s[i]);
            else if(isdigit(s[i]))
            {
                temp=0;
                while(isdigit(s[i]) && i<n)
                {
                    temp=(temp*10)+(s[i]-'0');
                    i++;
                }
                num.push_back(temp);
                i--;
            }
        }
        for(i=0;i<op.size();i++)
        {
            if(op[i]=='*' || op[i]=='/')
            {
                
                a=num[i];
                b=num[i+1];
                
                if(op[i]=='*')
                    c=a*b;
                else
                    c=a/b;
                cout<<a<<" "<<b<<" "<<c<<endl;
                num[i]=c;
                num.erase(num.begin()+i+1);
                op.erase(op.begin()+i);
                i--;
            }
        }
        for(i=0;i<num.size();i++)
            cout<<num[i]<<" ";
        val=num[0];
        for(i=0;i<op.size();i++)
        {
            a=num[i+1];
            if(op[i]=='+')
                val+=a;
            else
                val-=a;   
        }
        return val;
    }
};