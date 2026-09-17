class Solution {
public:
    int kthFactor(int n, int k) {
        int count = 0;
        int number = 0;
        for(int i=1; i*i<=n; i++)
        {
            if(n % i == 0)
            {
                count++;
                number = i;
            }
            if(count == k)
            {
                return number;
            }
        }
        for(int i=number; i >= 1; i--)
        {
            if(n % i == 0 && i != n/i)
            {
                count++;
                number = n/i;
            }
            if(count == k)
            {
                return number;
            }
        }
        
        return -1;
    }
};