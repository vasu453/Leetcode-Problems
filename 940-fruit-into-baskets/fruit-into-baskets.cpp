class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> mp;
        int left = 0, right = 0, maxi = 0;
        int baskets_used = 0;
        for(right = 0; right<n; right++)
        {
            mp[fruits[right]]++;
            if(mp[fruits[right]] == 1)
            {
                baskets_used++;
            }
            if(baskets_used > 2)
            {
                while(baskets_used > 2){
                
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0)
                {
                    baskets_used--;
                }
                left++;
                }
            }
            maxi = max(right-left+1, maxi);
        }
        return maxi;

        
    }
};