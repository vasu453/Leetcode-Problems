class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pref = 0;
        int suff = 0;
        int total = 0;
        for(auto i:nums)
        {
            total+=i;
        }
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int suff = total-pref-nums[i];
            if(pref == suff)
            {
                return i;
            }
            pref += nums[i];
        }
        return -1;
        
    }
};