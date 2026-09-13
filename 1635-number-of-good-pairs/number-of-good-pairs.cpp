class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      unordered_map<int, int> counts;
        int goodPairs = 0;
        for (int num : nums) {
            goodPairs += counts[num];
            counts[num]++;
        } 
        return goodPairs;  
    }
};