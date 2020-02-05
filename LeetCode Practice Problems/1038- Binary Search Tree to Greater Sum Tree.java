class Solution {
    int s = 0;
    void find(TreeNode root)
    {
        if(root == null)
            return;
        find(root.right);
        s = s + root.val;
        root.val = s;
        find(root.left);
    }
    public TreeNode bstToGst(TreeNode root) {
        find(root);
        return root;
    }
}
