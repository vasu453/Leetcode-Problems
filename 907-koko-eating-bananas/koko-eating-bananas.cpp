class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = 0;
        for(int i=0; i<n; i++)
        {
            high = max(high, piles[i]);
        }
        while(low <= high)
        {
            long long time = 0;
            int k = low + (high-low)/2;
            for(int i=0; i<n; i++)
            {time += (piles[i]+k-1)/k;}
            if(time <= h)
            {
                high = k-1;
            }
            else
            {
                low = k+1;
            }
        }
        return low;
        
    }
};