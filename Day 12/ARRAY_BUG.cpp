vector<int> Solution::rotateArray(vector<int> &A, int B) 
{
    B = (B%A.size());
    rotate(A.begin(), A.begin()+B, A.end());
    return A; 
}