// https://leetcode.com/problems/find-the-difference-of-two-arrays

class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map1 = new HashMap<Integer, Integer>();
        HashMap<Integer, Integer> map2 = new HashMap<Integer, Integer>();
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        List<Integer> nm = new ArrayList<Integer>();
        List<Integer> nm1 = new ArrayList<Integer>();
        for(int i=0;i<nums1.length;i++) {
            map1.put(nums1[i], map1.getOrDefault(nums1[i], 0)+1);
        }
        for(int i=0;i<nums2.length;i++) {
            map2.put(nums2[i], map2.getOrDefault(nums2[i], 0)+1);
        }
        for(int i:map1.keySet()) {
            if(!map2.containsKey(i)) {
                nm.add(i);
            }
        }
        for(int i:map2.keySet()) {
            if(!map1.containsKey(i)) {
                nm1.add(i);
            }
        }
        res.add(nm);
        res.add(nm1);
        return res;
    }
}