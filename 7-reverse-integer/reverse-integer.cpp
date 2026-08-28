class Solution {
public:
    int reverse(int x) {
        int answer = 0;
        while (x != 0) {
            int digit = x % 10;

            if (answer > INT_MAX / 10 || (answer == INT_MAX / 10 && digit > 7))
            {
                return 0;
            }
            if (answer < INT_MIN / 10 || (answer == INT_MIN / 10 && digit < -8))
            {
                return 0;
            }
            answer = answer * 10 + digit;
            x /= 10;
        }
        
            return answer;
           
    }
};