class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
        ArrayList<Double> a = new ArrayList<Double>();
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while(q.size() > 0)
        {
            Queue<TreeNode> t = new LinkedList<>();
            int sz = 0;
            double s = 0;
            while(q.size() > 0)
            {
                sz++;
                TreeNode n = q.poll();
                s+=n.val;
                if(n.left != null)
                    t.add(n.left);
                if(n.right != null)
                    t.add(n.right);
            }
            s = (double) s / (double) sz;
            q = t;
            a.add(s);
        }
        return a;
    }
}
