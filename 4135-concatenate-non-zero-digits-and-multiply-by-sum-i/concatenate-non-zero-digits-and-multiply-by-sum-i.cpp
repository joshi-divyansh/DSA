class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long x = 0;
        long long digit_sum = 0;
        
        for (char ch : s) {
            if (ch != '0') {
                int digit = ch - '0';
                x = x * 10 + digit;       
                digit_sum += digit;       
            }
        }
        
        return x * digit_sum;
    }
};