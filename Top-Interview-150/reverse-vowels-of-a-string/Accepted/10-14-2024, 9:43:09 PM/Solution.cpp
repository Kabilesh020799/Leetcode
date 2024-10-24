// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        string vowelString = "";
        for(int i=0;i<s.length();i++) {
            if(vowels.contains(s[i])) {
                vowelString += s[i];
            }
        }
        int j = vowelString.length()-1;
        for(int i=0;i<s.length();i++) {
            if(vowels.contains(s[i])) {
                s[i] = vowelString[j--];
            }
        }
        return s;
    }
};