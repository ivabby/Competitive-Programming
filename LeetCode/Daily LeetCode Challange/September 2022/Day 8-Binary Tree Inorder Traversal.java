class Solution {
    List<Integer> ans = new ArrayList();
    public List<Integer> inorderTraversal(TreeNode root) {
        if(root != null) {
            inorderTraversal(root.left);
            ans.add(root.val);
            inorderTraversal(root.right);
        }
        return ans;
    }
}
