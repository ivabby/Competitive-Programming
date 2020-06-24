class Solution {
    public int countNodes(TreeNode root) {
        int leftHeight = leftHeight(root);
	    int rightHeight = rightHeight(root);
        return (leftHeight == rightHeight) ? (1 << leftHeight) - 1 
									       : 1 + countNodes(root.left) + countNodes(root.right);
    }
    
    private int leftHeight(TreeNode root) {
        return root == null ? 0 : 1 + leftHeight(root.left);
    }
    
    private int rightHeight(TreeNode root) {
        return root == null ? 0 : 1 + rightHeight(root.right);
    }
}
