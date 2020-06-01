class Solution {
    public TreeNode invertTree(TreeNode root) {
        if(root == null)
            return root;
        
        TreeNode l = invertTree(root.left);
        TreeNode r = invertTree(root.right);
        
        root.right = l;
        root.left = r;
        
        return root;
    }
}
