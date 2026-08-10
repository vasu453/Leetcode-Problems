class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int left = -1, right = -1;
        //lower bound
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid] == target)
            {
                left = mid;
                high = mid-1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        low = 0;
        high = nums.size() - 1;
        //upper bound
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid] == target)
            {
                right = mid;
                low = mid+1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return {left, right};

        
        
        
    }
};