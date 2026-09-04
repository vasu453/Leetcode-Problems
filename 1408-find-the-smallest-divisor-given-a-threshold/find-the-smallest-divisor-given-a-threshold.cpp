class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = 0;
        for(int i=0; i<n; i++)
        {
            maxi = max(maxi, nums[i]);
        }
        int low = 1, high = maxi;
        while(low <= high)
        {
            int mid = low + (high-low) / 2;
            int sum = 0;
            for(int i=0; i<n; i++)
            {
                sum += (nums[i] + mid - 1) / mid; 
            }
            if(sum <= threshold)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
};