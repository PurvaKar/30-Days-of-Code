int Solution::braces(string A) 
{
    stack<char> s;
    int i, flag, n;
    n=A.size();
    for( i = 0; i < n; i++) 
    {
        if(A[i] == '+' || A[i] == '-' || A[i] == '/' || A[i] == '*'|| A[i] == '(') 
            s.push(A[i]);
        else if(A[i] == ')') 
        {
            flag = 0;
            while(s.top() != '(')
            {
                s.pop();
                flag++;
            }
            s.pop();
            if(flag == 0) 
                return 1;
        }
    }
    return 0;
}
