class FindElements {
    HashSet<Integer> set = new HashSet();
    
    public void traverse(TreeNode root,int val) {
        if(root == null) return;
        set.add(val);
        traverse(root.left , 2*val+1);
        traverse(root.right , 2*val+2);
    }
    
    public FindElements(TreeNode root) {
        traverse(root,0);
    }
    
    public boolean find(int target) {
        return set.contains(target);
    }
}
