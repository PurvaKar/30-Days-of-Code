int Solution::evalRPN(vector<string> &A) 
{
    long long int n, i, a, b, c;
    stack<long long int> s;
    n=A.size();
    for(i=0;i<n;i++)
    {
        if(A[i]!="/" && A[i]!="*" && A[i]!="-" && A[i]!="+")
            s.push(stoi(A[i]));
        else
        {
            a=s.top();
            s.pop();
            b= s.top();
            s.pop();
            if(A[i]=="/")
                c=b/a;
            else if(A[i]=="+")
                c=b+a;
            else if(A[i]=="-")
                c=b-a;
            else if(A[i]=="*")
                c=b*a;
            s.push(c);
        }
    }
    return s.top();
}
