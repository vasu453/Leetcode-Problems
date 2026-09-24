class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int rowlim = matrix.size()-1;
        int collim = matrix[0].size()-1;

        while(low <= rowlim && collim >= 0)
        {
            int elt = matrix[low][collim];
            if(target == elt)
            {
                return true;
            }
            else if(target < elt)
            {
                collim--;
            }
            else
            {
                low++;
            }
        }
        return false;
    }
};