vector<int> Solution::twoSum(const vector<int> &A, int B) 
{
    unordered_map<int,int> occ;
	int start_index,end_index;
	start_index = end_index = -1;
	for(int i=0;i<A.size();i++)
	{
		if(occ.find(B - A[i])!=occ.end())
		{
			start_index = occ[B - A[i]] + 1;
			end_index = i + 1;
			break;
		}
		else
		{
		    if(occ.find(A[i]) == occ.end())
		    {
		        occ[A[i]] = i;    
		    }
		}
	}
	vector<int> ans;
	if(start_index != -1)
	{
	    ans.push_back(start_index);
	    ans.push_back(end_index);
	}
    return ans;
}
