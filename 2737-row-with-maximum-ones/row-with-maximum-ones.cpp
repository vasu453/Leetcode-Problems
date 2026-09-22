class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi_row = 0;
        int rows = mat.size();
        int cols = mat[0].size();
        int maxi = 0;
        for(int row = 0; row < rows; row++){
            int count = 0;
            for(int col = 0; col < cols; col++){
                count += mat[row][col];
            }
            if(count > maxi)
            {
                maxi = count;
                maxi_row = row;
            }
        }
        return{maxi_row, maxi};
        
    }
};