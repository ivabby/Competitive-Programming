class Solution {
    private void preorderTraversalHelper(TreeNode root,List<Integer> ans) {
        if(root != null) {
            ans.add(root.val);
            preorderTraversalHelper(root.left, ans);
            preorderTraversalHelper(root.right , ans);
        }
    }
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList();
        preorderTraversalHelper(root,ans);
        return ans;
    }
}
