class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = 0;
        int n = weights.size(), overall = 0;
        for(int i=0; i<n; i++)
        {
            maxi = max(weights[i], maxi);
            overall += weights[i];
        }
        int low = maxi, high = overall;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int i = 0;
            int reqd = 0;

            while(i < n)
            {
                int tempc = mid;
                while(tempc > 0 && i < n)
                {
                    if(tempc - weights[i] >= 0){
                    tempc -= weights[i];
                    i++;}
                    else
                    {
                        break;
                    }
                }
                reqd++;
            }
            if(reqd > days)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            
        }
        return low;
        
    }
};