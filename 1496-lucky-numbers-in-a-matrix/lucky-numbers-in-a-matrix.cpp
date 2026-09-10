class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            int rowMin = INT_MAX;
            int col = -1;

            for(int j = 0; j < m; j++)
            {
                if(matrix[i][j] < rowMin)
                {
                    rowMin = matrix[i][j];
                    col = j;
                }
            }

            bool lucky = true;

            for(int k = 0; k < n; k++)
            {
                if(matrix[k][col] > rowMin)
                {
                    lucky = false;
                    break;
                }
            }

            if(lucky)
                ans.push_back(rowMin);
        }

        return ans;
    }
};