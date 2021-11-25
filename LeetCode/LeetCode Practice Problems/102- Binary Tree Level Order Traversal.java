class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> q = new LinkedList();
        
        if(root != null) {
            q.add(root);
        }
        
        List<List<Integer>> a = new ArrayList();
        
        while(!q.isEmpty()) {
            int sz = q.size();
            List<Integer> l = new ArrayList();
            while(sz > 0) {
                sz--;
                TreeNode t = q.remove();
                l.add(t.val);
                
                if(t.left != null) q.add(t.left);
                if(t.right != null) q.add(t.right);
            }
            
            a.add(l);
        }
        return a;
    }
}
