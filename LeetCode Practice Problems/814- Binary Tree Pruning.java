class Solution {
    public TreeNode pruneTree(TreeNode root) {
        return check(root)?root:null;
    }
    
    public boolean check(TreeNode root){
        if(root == null) return false;
        boolean a1 = check(root.left);
        boolean a2 = check(root.right);
        if(!a1) root.left = null;
        if(!a2) root.right = null;
        
        return (root.val == 1) || a1 || a2;
    }
}
