string Solution::simplifyPath(string A) 
{
    string str="";
    stack<string> s;
    int i=0;
    A.push_back('/');
    while(i<A.size())
    {
        while(A[i]!='/')
        {
            str.push_back(A[i]);
            i++;
        }
        if(s.size()>0 && str=="..")
        {
            s.pop();
        }
        else if(str!="" && str!="." && str!="..") 
        {
            s.push(str);
        }
        str.clear();
        i++;
    }
    str="";
    if(s.empty()) 
        return "/";
    
    stack<string> t;
    while(!s.empty())
    {
        t.push(s.top());
        s.pop();
    }
    while(!t.empty())
    {
        str.push_back('/');
        str.append(t.top());
        t.pop();
    }
    return str;
}
