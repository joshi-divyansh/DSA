class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> present(nums.begin(), nums.end());
        for (int i = 1; ; ++i) {
            int multiple = k * i;
            if (present.find(multiple) == present.end()) {
                return multiple;
            }
        }
    }
};