// https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string res = "";
        for(int i=0;i<s.length();i++) {
            if(s[i] == '*') {
                if(!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(s[i]);
            }
        }
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};