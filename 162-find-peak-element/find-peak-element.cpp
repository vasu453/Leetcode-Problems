class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = -1;
        if(n == 1)
        {
            return 0;
        }
        else if(nums[0] > nums[1]) 
        {
            return 0;
        }
        else if(nums[n-1] > nums[n-2])
        {
            return n-1;
        }
        else
        {
            while(low <= high)
            {
                int mid = low + (high-low) / 2;
                if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])
                {
                    ans = mid;
                    break;
                }
                else if(nums[mid+1] > nums[mid])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return ans;

        
    }
};