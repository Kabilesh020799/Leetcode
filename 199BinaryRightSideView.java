import java.util.ArrayList;
import java.util.List;

import javax.swing.tree.TreeNode;

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
  public List<Integer> bfs(TreeNode root, List<Integer> res, int level) {
      if(root == null) {
          return res;
      }
      if(level > res.size()) {
          res.add(root.val);
      }
      List<Integer> newRes = bfs(root.right, res, level + 1);
      newRes = bfs(root.left, res, level + 1);
      return newRes;
  }
  public List<Integer> rightSideView(TreeNode root) {
      List<Integer> res = new ArrayList<Integer>();
      res = bfs(root, res, 1);
      return res;
  }
}