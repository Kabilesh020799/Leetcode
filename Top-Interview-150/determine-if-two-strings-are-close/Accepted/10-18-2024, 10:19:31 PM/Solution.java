// https://leetcode.com/problems/determine-if-two-strings-are-close

class Solution {
    public boolean closeStrings(String word1, String word2) {
        HashMap<Character, Integer> map1 = new HashMap<Character, Integer>();
        HashMap<Character, Integer> map2 = new HashMap<Character, Integer>();
        if(word1.length() != word2.length()) {
            return false;
        }
        for(int i=0;i<word1.length();i++) {
            map1.put(word1.charAt(i), map1.getOrDefault(word1.charAt(i), 0) + 1);
        }
        for(int i=0;i<word2.length();i++) {
            map2.put(word2.charAt(i), map2.getOrDefault(word2.charAt(i), 0) + 1);
        }
        if(!map1.keySet().equals(map2.keySet())) {
            return false;
        }
        List<Integer> freq1 = new ArrayList<Integer>(map1.values());
        List<Integer> freq2 = new ArrayList<Integer>(map2.values());
        Collections.sort(freq1);
        Collections.sort(freq2);
        if(!freq1.equals(freq2)) {
            return false;
        }
        return true;
    }
}