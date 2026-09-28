class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int> unique;
        unique.insert(candyType.begin(), candyType.end());
        int types = unique.size();
        return min(types, n/2);
    }
};