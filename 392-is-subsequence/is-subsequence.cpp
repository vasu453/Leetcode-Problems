class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lent = t.length();
        int lens = s.length();
        int i = 0, j = 0;
        while(i < lent && j < lens)
        {
            if(s[j] == t[i])
            {
                j++;
            }
            
                i++;
            
        }
        if(j == lens)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};