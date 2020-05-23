int Solution::isPalindrome(int A) 
{
    int i,j,len;
    string s = to_string(A);
    len = s.size();
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        if(s[i]!=s[j])
            return 0;
    }
    return 1;
}