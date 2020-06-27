class Solution {
    public int sumNumbers(TreeNode root) {
        if(root == null)
            return 0;
        if(root.left == null && root.right == null)
            return root.val;
        
        if(root.left != null)
            root.left.val = root.val*10 + root.left.val;
        if(root.right != null)
            root.right.val = root.val*10 + root.right.val;
        
        return (sumNumbers(root.left) + sumNumbers(root.right));
    }
}
