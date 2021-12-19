class Solution {
    private int inorderTraversal(TreeNode root,int mn,int mx) {
        if(root == null) return 0;
        
        int val = Math.max(Math.abs(root.val - mn) , Math.abs(root.val - mx));
        int left = inorderTraversal(root.left,Math.min(mn , root.val),Math.max(mx,root.val));
        int right = inorderTraversal(root.right,Math.min(mn , root.val),Math.max(mx,root.val));
        
        return Math.max(val , Math.max(left , right));
    }
    
    public int maxAncestorDiff(TreeNode root) {
        return inorderTraversal(root,root.val,root.val);
    }
}
