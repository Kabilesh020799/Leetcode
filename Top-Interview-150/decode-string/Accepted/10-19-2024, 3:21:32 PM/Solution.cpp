// https://leetcode.com/problems/decode-string

class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        int len = s.length();
        stack<string> res;
        stack<int> counts;
        string str = "";

        while(i < len) {
            if(s[i] == '[') {
                res.push(str);
                str = "";
                i++;
            } else if (s[i] == ']') {
                int count = counts.top();
                counts.pop();
                string temp = res.top();
                res.pop();
                for(int i=0;i<count;i++) {
                    temp += str;
                }
                str = temp;
                i++;
            } else if(isdigit(s[i])) {
                int count = 0;
                while(isdigit(s[i])) {
                    count = 10 * count + (s[i] - '0');
                    i++;
                }
                counts.push(count);
            } else {
                str += s[i];
                i++;
            }
        }
        return str;
    }
};