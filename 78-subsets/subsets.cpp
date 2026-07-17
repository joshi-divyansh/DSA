class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       int n = nums.size();
        int subsetCount = 1 << n; 
        vector<vector<int>> result;

        for (int mask = 0; mask < subsetCount; ++mask) {
            vector<int> current;
            for (int i = 0; i < n; ++i) {
               
                if ((mask & (1 << i)) != 0) {
                    current.push_back(nums[i]);
                }
            }
            result.push_back(current);
        }
        
        return result; 
    }
};