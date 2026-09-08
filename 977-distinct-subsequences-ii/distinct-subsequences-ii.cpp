class Solution {
public:
    int distinctSubseqII(string s) {
        constexpr int MOD = 1e9 + 7;

        std::vector<long long> last_added(26, 0);

        long long total = 0;

        for (char ch : s) {
            int idx = ch - 'a';

            long long current_new = (total + 1 - last_added[idx] + MOD) % MOD;

            total = (total + current_new) % MOD;

            last_added[idx] = (last_added[idx] + current_new) % MOD;
        }

        return total;
    }
};