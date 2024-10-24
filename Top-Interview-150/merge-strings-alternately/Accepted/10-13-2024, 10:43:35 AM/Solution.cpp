// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";
        int len1 = word1.length();
        int len2 = word2.length();
        int i = 0;
        int j = 0;
        while(i < len1 && j < len2) {
            word3 += word1[i++];
            word3 += word2[j++];
        }
        while(i < len1) {
            word3 += word1[i++];
        }
        while(j < len2) {
            word3 += word2[j++];
        }
        return word3;
    }
};