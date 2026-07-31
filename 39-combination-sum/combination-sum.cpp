class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ds;

    void solve(int idx, int target, vector<int>& candidates)
    {
        if (idx == candidates.size())
        {
            if (target == 0)
                ans.push_back(ds);
            return;
        }

        if (candidates[idx] <= target)
        {
            ds.push_back(candidates[idx]);
            solve(idx, target - candidates[idx], candidates); 
            ds.pop_back(); 
        }
        
        solve(idx + 1, target, candidates);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        solve(0, target, candidates);
        return ans;
    }
};