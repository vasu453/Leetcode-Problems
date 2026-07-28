class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long sn = (n* (n+1)) / 2;
        long long sn2 = (n * (n+1) * (2*n+1)) / 6;
        long long s1 = 0,  s2 = 0;
        for(int i=0; i<n; i++)
        {
            s1 += nums[i];
            s2 += nums[i] * nums[i];
        }
        long long val1 = s1 - sn;
        long long val2 = s2 - sn2;
        val2 = val2 / val1;
        long long repeating = abs((val1 - val2) / 2);
        long long missing = abs(val2 - repeating);
        return {(int)missing, (int)repeating};
        

        
    }
};