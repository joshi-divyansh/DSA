class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0); 

        for (char c : s) {
            if (c == '(') {
                st.push(0);
            } else {
                int inner_score = st.top();
                st.pop();
                
                int current_score = (inner_score == 0) ? 1 : 2 * inner_score;
                st.top() += current_score;
            }
        }

        return st.top();
    }
};