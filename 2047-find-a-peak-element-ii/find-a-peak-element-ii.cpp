class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int high = rows-1;
        int low = 0;
        pair<int, int> coords = {0,0};
        while(low <= high)
        {
            int col = 0;
            int mid = low + (high-low) / 2;
            for(int i=0; i<cols; i++)
            {
                if(mat[mid][i] > mat[mid][col]){
                    col = i;
                }
            }
            int up = (mid>0)? mat[mid-1][col] : -1;
            int down = (mid < rows-1) ? mat[mid+1][col] : -1;
            if(mat[mid][col] > up && mat[mid][col]> down)
            {
                return {mid, col};
            }
            else if(down > mat[mid][col]){
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return {-1,-1};
    }
};