// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string res = "";
        string spl = "";
        for(int i=0;i<s.length();i++){
            if(isspace(s[i])) {
                if(!spl.empty()) {
                    words.push_back(spl);
                }
                spl = "";
            } else {
                spl += s[i];
            }
        }
        if(!spl.empty()) {
            words.push_back(spl);
        }
        for(int i = words.size()-1;i>=0;i--) {
            res += words[i];
            if(i != 0) {
                res += " ";
            }
        }
        return res;
    }
};