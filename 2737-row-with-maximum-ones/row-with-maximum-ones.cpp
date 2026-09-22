class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<pair<int, int>> lekka;
        int rows = mat.size();
        int cols = mat[0].size();
        int maxi = 0;
        for(int row = 0; row < rows; row++){
            int count = 0;
            for(int col = 0; col < cols; col++){
                count += mat[row][col];
            }
            lekka.push_back({row,count});
            maxi = max(maxi, count);
        }
        for(int i = 0; i < rows; i++)
        {
            if(lekka[i].second == maxi)
            {
                return {lekka[i].first, lekka[i].second};
            }
        }
        return{0, 0};
        
    }
};