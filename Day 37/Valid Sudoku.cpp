int Solution::isValidSudoku(const vector<string> &A) 
{
    int i, j, k, n;
    n=A.size();
    for(i=0;i<n;i++)
    {
        map<char, int> occ;
        for(j=0;j<n;j++)
        {
            if(A[i][j]!='.')
            {
                occ[A[i][j]]++;
                if(occ[A[i][j]]>1)
                    return 0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        map<char, int> occ;
        for(j=0;j<n;j++)
        {
            if(A[j][i]!='.')
            {
                occ[A[j][i]]++;
                if(occ[A[j][i]]>1)
                    return 0;
            }
        }
    }
    for(k=0;k<n;k+=3)
    {
        i=0;
        map<char, int> occ;
        
        for(;i<3;i++)
        {
            int kk=k;
            for(j=0;j<3;j++, kk++)
            {
                if(A[i][kk]!='.')
                {
                    occ[A[i][kk]]++;
                    if(occ[A[i][kk]]>1)
                        return 0;
                }
            }
        }
    }
    for(k=0;k<n;k+=3)
    {
        i=3;
        map<char, int> occ;
        
        for(;i<6;i++)
        {
            int kk=k;
            for(j=0;j<3;j++, kk++)
            {
                if(A[i][kk]!='.')
                {
                    occ[A[i][kk]]++;
                    if(occ[A[i][kk]]>1)
                        return 0;
                }
            }
        }
    }
    for(k=0;k<n;k+=3)
    {
        i=6;
        map<char, int> occ;
        
        for(;i<9;i++)
        {
            int kk=k;
            for(j=0;j<3;j++, kk++)
            {
                if(A[i][kk]!='.')
                {
                    occ[A[i][kk]]++;
                    if(occ[A[i][kk]]>1)
                        return 0;
                }
            }
        }
    }
    return 1;
}
