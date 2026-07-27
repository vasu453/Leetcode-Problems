class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0; i<nums.size(); i++)
        {
            nums[i] = pow(nums[i], 2);
        }
        int mini = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < nums[mini])
            {
                mini = i;
            }       
        }
        ans[0] = nums[mini];
        int left = mini - 1, right = mini + 1, i=1;
        while(left >= 0 && right < n)
        {
            if(nums[left] < nums[right])
            {
                ans[i] = nums[left];
                i++, left--;
            }
            else
            {
                ans[i] = nums[right];
                i++, right++;
            }
        }
        while(left >= 0)
        {
            ans[i] = nums[left];
            i++, left--;
        }
        while(right < n)
        {
            ans[i] = nums[right];
            i++, right++;
        }
        return ans;
    }
};