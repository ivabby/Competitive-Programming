class Solution {
    
    public boolean validateBST(TreeNode root,long mn,long mx) {
        if(root == null) return true;
        if(root.val <= mn || root.val >= mx) {
            return false;
        }
        return validateBST(root.left , mn , root.val) && 
                validateBST(root.right , root.val , mx);
    }
    
    public boolean isValidBST(TreeNode root) {
        return validateBST(root , Long.MIN_VALUE , Long.MAX_VALUE);
    }
}
