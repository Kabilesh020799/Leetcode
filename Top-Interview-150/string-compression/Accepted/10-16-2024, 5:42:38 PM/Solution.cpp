// https://leetcode.com/problems/string-compression

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        string res = "";
        int size = chars.size();
        for(int j=0;j<size;j++) {
            if(chars[j] != chars[i]) {
                if(j - i > 1) {
                    res += chars[i] + std::to_string(j - i);
                } else {
                    res += chars[i];
                }
                i = j;
            }
        }
        if(size - i > 1) {
            res += chars[i] + std::to_string(size - i);
        } else {
            res += chars[i];
        }
        chars.clear();
        for(int j = 0;j<res.length();j++) {
            chars.push_back(res[j]);
        }
        return res.length();
    }
};