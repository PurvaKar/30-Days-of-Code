class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n,a,b,i;
        n=nums.size();
        vector<int> ans;
        vector<pair<int, int>> A;
        for(i=0;i<n;i++)
            A.push_back(make_pair(nums[i], i));
        sort(A.begin(), A.end());
        a=0;b=n-1;
        while(a<b)
        {
            if(A[a].first + A[b].first==target)
            {
                ans.push_back(A[a].second);
                ans.push_back(A[b].second);
                break;
            }
            if(A[a].first+A[b].first < target)
                a++;
            else
                b--;
        }
        return ans;
    }
};