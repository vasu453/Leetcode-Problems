class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int n = nums.size(), total = 0, subarray = 0;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            total += nums[i];
        }
        for(int i=0; i<n; i++)
        {
            if(total < subarray)
            {
                break;
            }
            ans.push_back(nums[i]);
            total -= nums[i];
            subarray += nums[i];  
        }
        return ans;
    }
};