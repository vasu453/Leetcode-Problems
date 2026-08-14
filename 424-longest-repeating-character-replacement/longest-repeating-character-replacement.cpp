class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0, right = 0, maxi = 0, maxfreq = 0;
        int changes = 0;
        unordered_map<char, int> mp;
        for(right = 0; right<n; right++)
        {
            mp[s[right]]++;
            maxfreq = max(mp[s[right]], maxfreq);
            changes = right-left+1 - maxfreq;
            if(changes > k)
            {
                while(changes > k)
                {
                    mp[s[left]]--;
                    left++;
                    changes = right-left+1 - maxfreq;
                }
            }
            maxi = max(right-left+1, maxi);
        }
        return maxi;

        
    }
};