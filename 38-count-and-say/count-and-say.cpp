class Solution {
public:
    string countAndSay(int n) {
      if (n <= 0) return "";
        string current = "1";

        for (int i = 2; i <= n; ++i) {
            string next = "";
            int len = current.length();
            
            for (int j = 0; j < len; ++j) {
                int count = 1;
                
                while (j + 1 < len && current[j] == current[j + 1]) {
                    count++;
                    j++;
                }
               
                next += to_string(count) + current[j];
            }
            current = move(next); 
        }

        return current;  
    }
};