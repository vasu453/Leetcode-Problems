class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int low = 1;
        int high = position[n-1]-position[0];
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            int count = 1;
            int last_placed = 0;
            bool midvalid = false;
            for(int i=1; i<n; i++)
            {
                if(position[i] - position[last_placed] >= mid)
                {
                    last_placed = i;
                    count++;
                }
                if(count == m)
                {
                    midvalid = true;
                    break;
                }
            }
            if(!midvalid)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return high;
    }
};