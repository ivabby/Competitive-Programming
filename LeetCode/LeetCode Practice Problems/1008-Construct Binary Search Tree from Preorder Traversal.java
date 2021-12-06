class Solution {
    
    public TreeNode constructTree(int key,TreeNode root) {
        if(root == null) {
            return new TreeNode(key);
        }
        
        if(root.val > key) {
            root.left = constructTree(key , root.left);
        } else {
            root.right = constructTree(key , root.right);
        }
        
        return root;
    }
    
    public TreeNode bstFromPreorder(int[] preorder) {
        TreeNode root = null;
        
        for(int key: preorder) {
            root = constructTree(key , root);
        }
        
        return root;
    }
}
