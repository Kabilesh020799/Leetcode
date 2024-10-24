// https://leetcode.com/problems/asteroid-collision

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        int size = asteroids.size();
        stack<int> st;
        for(int i=0;i<size;i++) {
            if(asteroids[i] < 0) {
                if(st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                } else {
                    while(!st.empty()) {
                        if(abs(asteroids[i]) >= st.top()) {
                            st.pop();
                        } else {
                            break;
                        }
                    }
                }
            } else {
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