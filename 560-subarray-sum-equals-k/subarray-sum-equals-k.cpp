class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<long long,int> premap;

        premap[0] = 1;

        long long sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            long long rem = sum - k;

            if(premap.find(rem) != premap.end())
            {
                count += premap[rem];
            }

            premap[sum]++;
        }

        return count;
    }
};