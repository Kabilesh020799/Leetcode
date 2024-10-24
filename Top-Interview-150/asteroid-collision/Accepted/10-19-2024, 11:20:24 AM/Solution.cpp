// https://leetcode.com/problems/asteroid-collision

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        int size = asteroids.size();
        stack<int> st;
        for(int i=0;i<size;i++) {
            bool dest = false;
            while(!st.empty() && asteroids[i] < 0 && st.top() > 0) {
                if(abs(asteroids[i]) > st.top()) {
                    st.pop();
                } else if(abs(asteroids[i]) == st.top()) {
                    st.pop();
                    dest = true;
                    break;
                } else {
                    dest = true;
                    break;
                }
            }
            if(!dest) {
                st.push(asteroids[i]);
            }
        }
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};