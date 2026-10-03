class Solution {
public:
int solve(int n, int pos, int mask, vector<int>& memo) {
        if (pos > n) return 1;
        if (memo[mask] != -1) return memo[mask];

        int total = 0;
        for (int i = 1; i <= n; ++i) {
            // If the i-th number is not used yet
            if (!(mask & (1 << (i - 1)))) {
                if (i % pos == 0 || pos % i == 0) {
                    total += solve(n, pos + 1, mask | (1 << (i - 1)), memo);
                }
            }
        }

        return memo[mask] = total;
        }
    int countArrangement(int n) {
    
        vector<int> memo(1 << n, -1);
        return solve(n, 1, 0, memo);
    
    }
};