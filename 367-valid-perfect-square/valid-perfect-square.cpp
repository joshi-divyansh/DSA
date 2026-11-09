class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 1, r = num;
        
        while (l <= r) {
            long long m = l + (r - l) / 2;
            long long mSquared = m * m;
            
            if (mSquared == num) {
                return true;
            } else if (mSquared < num) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        
        return false;
    }
};