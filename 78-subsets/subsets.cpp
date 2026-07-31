class Solution {
public:
    void subs(vector<int>& nums, vector<vector<int>>& ans, int ind, vector<int>& subset)
    {
        if(ind == nums.size())
        {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[ind]);
        subs(nums, ans, ind+1, subset);
        subset.pop_back();
        subs(nums, ans, ind+1, subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int ind = 0;
        vector<int> subset;
        subs(nums,ans,ind,subset);
        return ans;   
    }
};