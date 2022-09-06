class Solution {
    public TreeNode pruneTree(TreeNode root) {
        if(root == null)
            return null;
        
        TreeNode left = pruneTree(root.left);
        TreeNode right = pruneTree(root.right);
        
        if(left == null && right == null && root.val == 0)
            return null;
        
        root.left = left;
        root.right = right;
        return root;
    }
}
