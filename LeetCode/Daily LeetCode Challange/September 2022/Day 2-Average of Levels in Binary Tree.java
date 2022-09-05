class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> ans = new ArrayList();
        Queue<TreeNode> q = new LinkedList();
        if(root != null)
            q.add(root);
        
        while(!q.isEmpty()) {
            int sz = q.size();
            double sum = 0;
            int k = 0;
            while(k++ < sz) {
                TreeNode tmp = q.poll();
                sum += tmp.val;
                if(tmp.left != null)
                    q.add(tmp.left);
                if(tmp.right != null)
                    q.add(tmp.right);
            }
            ans.add((double)sum/(double)sz);
        }
        
        return ans;
    }
}
