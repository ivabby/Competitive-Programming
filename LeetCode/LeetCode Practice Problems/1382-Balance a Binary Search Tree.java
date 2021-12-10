class Solution {
    List<Integer> a = new ArrayList();
    
    public void inorder(TreeNode root) {
        if(root != null) {
            inorder(root.left);
            a.add(root.val);
            inorder(root.right);
        }
    }
    
    public TreeNode arrayToBST(int l,int h) {
        if(l > h) return null;
        int mid = h - (h - l)/2;
        
        TreeNode root = new TreeNode(a.get(mid));
        root.left = arrayToBST(l,mid-1);
        root.right = arrayToBST(mid+1,h);
        
        return root;
    }
    
    public TreeNode balanceBST(TreeNode root) {
        inorder(root);
        return arrayToBST(0,a.size()-1);
    }
}
