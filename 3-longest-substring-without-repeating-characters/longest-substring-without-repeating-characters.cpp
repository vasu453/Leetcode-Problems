class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        int left=0, right=0;
        int n = s.size();
        unordered_map<char, int> mp;
        for(right = 0; right < n; right++)
        {
            mp[s[right]]++;
            while(mp[s[right]] > 1)
            {
                mp[s[left]]--;
                left++;
            }
            maxi = max(right-left+1, maxi);
        }
        return maxi;

        
    }
};