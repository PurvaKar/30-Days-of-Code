int Solution::findMinXor(vector<int> &A) 
{
    sort(A.begin(), A.end()); 
    int minXor = INT_MAX; 
    int n, val = 0; 
    n = A.size();
    for (int i = 0; i < n - 1; i++) 
    { 
        val = A[i] ^ A[i + 1]; 
        minXor = min(minXor, val); 
    } 
    return minXor; 
}
