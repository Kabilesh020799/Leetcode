// https://leetcode.com/problems/equal-row-and-column-pairs

class Solution {
    public int equalPairs(int[][] grid) {
        int len = grid.length;
        HashMap<String, Integer> map1 = new HashMap<String, Integer>();
        HashMap<String, Integer> map2 = new HashMap<String, Integer>();
        int count = 0;

        for(int i=0;i<len;i++) {
            StringBuilder str1 = new StringBuilder();
            StringBuilder str2 = new StringBuilder();
            for(int j=0;j<len;j++) {
                str1.append(grid[i][j]);
                str2.append(grid[j][i]);
                if(j != len - 1) {
                    str1.append('_');
                    str2.append('_');
                }
            }
            String strs1 = str1.toString();
            String strs2 = str2.toString();
            map1.put(strs1, map1.getOrDefault(strs1, 0)+ 1);
            map2.put(strs2, map2.getOrDefault(strs2, 0)+ 1);
        }
        for(String ch: map1.keySet()) {
            if(map2.containsKey(ch)) {
                count += map1.get(ch) * map2.get(ch);
            }
        }
        return count;
    }
}