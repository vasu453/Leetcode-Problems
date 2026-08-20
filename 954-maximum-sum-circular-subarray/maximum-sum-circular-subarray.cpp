class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int best = nums[0];
        int ans_max = nums[0];
        int ans_min = nums[0];
        int worst = nums[0];
        int summ = nums[0];
        int n = nums.size();
        for(int i=1; i<n; i++)
        {
            int a = nums[i];
            int b = nums[i]+best;
            int c = nums[i]+worst;
            worst = min(a,c);
            best = max(a,b);
            ans_max = max(best,ans_max);
            ans_min = min(ans_min, worst);
            summ+= nums[i];
        }
        if(summ == ans_min)
        {
            return ans_max;
        }
        return max(ans_max, summ-ans_min);
    }
};