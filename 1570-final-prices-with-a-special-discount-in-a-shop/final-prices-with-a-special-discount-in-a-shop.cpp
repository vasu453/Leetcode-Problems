class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> mins;
        for(int i=n-1; i>=0; i--)
        {
            int org = prices[i];
            while(!mins.empty() && prices[i] < mins.top())
            {
                mins.pop();
            }
            
            if(!mins.empty())
            {
                prices[i] -= mins.top();
            }
            mins.push(org);
            
        }
        return prices;
        
    }
};