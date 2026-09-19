class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = nums[0];
        for(int i=1; i<n; i++)
        {
            high += nums[i];
            low = max(nums[i], low);
        }
        while(low <= high)
        {
            int mid = low + (high-low) / 2;
            int summ = 0;
            int splits = 1;
            for(int i=0; i<n; i++)
            {
                if(summ + nums[i] <= mid)
                {
                    summ += nums[i];
                }
                else
                {
                    summ = nums[i];
                    splits++;
                }
            }
            if(splits <= k)
            {
                high = mid - 1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
        
    }
};