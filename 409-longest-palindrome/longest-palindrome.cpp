class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int count = 0;
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]%2 == 0)
            {
                count+=2;
            }
        }
        bool is_odd = false;
        for(int i=0; i<n; i++)
        {
            if(mp[s[i]]%2 != 0)
            {
                is_odd = true;
                break;
            }
        }
        return count+(is_odd? 1: 0);
    }
};