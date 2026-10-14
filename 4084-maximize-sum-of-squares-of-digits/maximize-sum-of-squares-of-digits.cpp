class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
       if (sum > 9 * num) {
            return ""; 
       
    }
    string result = "";
        int cnt9 = sum / 9;
        int rem = sum % 9; 
         for (int i = 0; i < cnt9; ++i) {
            result += '9';
        }
        if (rem > 0) {
            result += to_string(rem);
        }
        while (result.length() < num) {
            result += '0';
        }       
        return result;
    }
};