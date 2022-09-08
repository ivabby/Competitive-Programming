class Solution {
    public String tree2str(TreeNode root) {
        if(root == null)
            return "()";
        
        String st = Integer.toString(root.val);
        String left = "" , right = "";
        if(root.left != null) {
            left = "(" + tree2str(root.left) + ")";
        }
        if(root.right != null) {
            if(left.equals("")) {
                left = "()";
            }
            right = "(" + tree2str(root.right) + ")";
        }
        
        st += left + right;
        
        return st;
    }
}
