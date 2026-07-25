class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>> dp(target + 1);
        
        
        dp[0].push_back({});
        
        for (int candidate : candidates) {
            for (int i = candidate; i <= target; ++i) {
                
                for (auto combo : dp[i - candidate]) {
                    combo.push_back(candidate);
                    dp[i].push_back(combo);
                }
            }
        }
        
        return dp[target];
    }
};