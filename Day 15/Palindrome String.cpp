int Solution::isPalindrome(string A) 
{
    long long int i, j, n;
    n = A.size();
    string dup;
    for(i=0;i<n;i++)
    {
        if(isalnum(A[i]))
            dup+=(tolower(A[i]));
    }
    n = dup.size();
    j=dup.size()-1;
    for(i=0;i<n;i++,j--)
    {
        if(dup[i]!=dup[j])
            return 0;
    }
    return 1;
}