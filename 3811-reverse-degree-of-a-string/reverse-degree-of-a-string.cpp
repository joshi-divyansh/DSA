class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); ++i) {

            int reverseCharVal = 26 - (s[i] - 'a');

            int stringIndex = i + 1;

            total += reverseCharVal * stringIndex;
        }

        return total;
    }
};