class FindElements {
    TreeNode node;
    public FindElements(TreeNode root) {
        node = root;
        node = construct(node , 0);
    }
    
    public TreeNode construct(TreeNode root , int v)
    {
        if(root == null)
        {
            return null;
        }
        root.val = v;
        root.left = construct(root.left , v*2+1);
        root.right = construct(root.right , v*2+2);
        return root;
    }
    
    public boolean find(int target) {
        return check(node , target);
    }
    
    public boolean check(TreeNode node,int v)
    {
        if(node == null) return false;
        boolean ans = (node.val == v) | 
                    check(node.left , v) |
                    check(node.right , v);
        return ans;
    }
}
