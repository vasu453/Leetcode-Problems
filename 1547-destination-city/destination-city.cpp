class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> source;
        unordered_map<string, int> destination;
        int n = paths.size();
        for(int i=0; i<n; i++)
        {
            source[paths[i][0]]++;
            destination[paths[i][1]]++;
        }
        string ans;
        for(auto d:destination)
        {
            if(source[d.first] == 0)
            {
                ans = d.first;
                break;
            }
        }
        return ans;
        
        
    }
};