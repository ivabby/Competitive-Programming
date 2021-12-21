class Solution {
    List<Integer> ans = new ArrayList();
    public List<Integer> postorderTraversal(TreeNode root) {
        if(root == null) return ans;
        
        postorderTraversal(root.left);
        postorderTraversal(root.right);
        ans.add(root.val);
        
        return ans;
    }
}
