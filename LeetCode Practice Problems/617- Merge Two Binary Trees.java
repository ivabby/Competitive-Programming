class Solution {
    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if(t1 == null && t2 == null)
            return null;
        if(t1 == null)
        {
            TreeNode t = new TreeNode(t2.val);
            t.right = mergeTrees(t1,t2.right);
            t.left = mergeTrees(t1,t2.left);
            return t;
        }
        else if(t2 == null)
        {
            TreeNode t = new TreeNode(t1.val);
            t.right = mergeTrees(t1.right,t2);
            t.left = mergeTrees(t1.left,t2);
            return t;
        }
        TreeNode t = new TreeNode(t1.val + t2.val);
        t.right = mergeTrees(t1.right,t2.right);
        t.left = mergeTrees(t1.left,t2.left);
        
        return t;
    }
}
