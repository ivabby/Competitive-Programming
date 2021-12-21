class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList();
        Queue<TreeNode> q = new LinkedList();
        if(root != null) {
            q.add(root);
        }
        
        boolean reverse = false;
        while(!q.isEmpty()) {
            List<Integer> res = new ArrayList();
            int sz = q.size();
            for(int i=0;i<sz;i++) {
                TreeNode tmp = q.poll();
                res.add(tmp.val);
                
                if(tmp.left != null) 
                    q.add(tmp.left);
                if(tmp.right != null)
                    q.add(tmp.right);
            }
            if(reverse) {
                Collections.reverse(res);
            }
            ans.add(res);
            reverse = !reverse;
        }
        return ans;
    }
}
