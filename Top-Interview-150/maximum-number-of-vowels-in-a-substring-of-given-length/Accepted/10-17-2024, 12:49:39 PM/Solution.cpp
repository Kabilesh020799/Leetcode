// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVal = 0;
        int len = s.length();
        string vowels = "aeiou";
        int sum = 0;
        for(int i=0;i<k;i++) {
            if(vowels.find(s[i]) < vowels.length()) {
                sum++;
            }
        }
        maxVal = sum;
        for(int i=1;i<=len-k;i++) {
            if(vowels.find(s[i - 1]) < vowels.length()) {
                sum--;
            }
            if(vowels.find(s[i + k -1]) < vowels.length()) {
                sum++;
            }
            if(maxVal < sum) {
                maxVal = sum;
            }
        }
        return maxVal;
    }
};