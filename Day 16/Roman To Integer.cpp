int Solution::romanToInt(string A) 
{
    int i,n,num;
    n=A.size();
    num=0;
    for(i=0;i<n;i++)
    {
        if(A[i]=='I')
            num+=1;
        else if(A[i]=='V')
        {
            if(A[i-1]=='I')
                num+=3;
            else
                num+=5;
        }
        else if(A[i]=='X')
        {
            if(A[i-1]=='I')
                num+=8;
            else
                num+=10;
        }
        else if(A[i]=='L')
       {
            if(A[i-1]=='X')
                num+=30;
            else
                num+=50;
        }
        else if(A[i]=='C')
        {
            if(A[i-1]=='X')
                num+=80;
            else
                num+=100;
        }    
        else if(A[i]=='D')
        {
            if(A[i-1]=='C')
                num+=300;
            else
                num+=500;
        }  
        else if(A[i]=='M')
        {
            if(A[i-1]=='C')
                num+=800;
            else
                num+=1000;
        }  
    }
    return num;
}