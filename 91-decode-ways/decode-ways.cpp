class Solution {
public:
    int numDecodings(string s) {
        if (s.empty() || s[0] == '0') return 0;

        int prev2 = 1; // Represents dp[i - 2]
        int prev1 = 1; // Represents dp[i - 1]

        for (int i = 1; i < s.length(); ++i) {
            int current = 0;

            // Check single digit decode
            if (s[i] != '0') {
                current += prev1;
            }

            // Check two-digit decode
            int twoDigit = (s[i - 1] - '0') * 10 + (s[i] - '0');
            if (twoDigit >= 10 && twoDigit <= 26) {
                current += prev2;
            }

            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};