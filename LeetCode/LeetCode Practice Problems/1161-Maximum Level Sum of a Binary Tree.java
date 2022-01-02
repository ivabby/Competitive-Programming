class Solution {
    public int maxLevelSum(TreeNode root) {
        Queue<TreeNode> q = new LinkedList();
        if(root != null) {
            q.add(root);
        }
        int level = 0 , ans = 0;
        long maxSum = Long.MIN_VALUE;
        while(!q.isEmpty()) {
            int sz = q.size();
            level++;
            long curSum = 0;
            while(sz > 0) {
                sz--;
                TreeNode t = q.remove();
                curSum += t.val * 1l;
                if(t.left != null) 
                    q.add(t.left);
                if(t.right != null)
                    q.add(t.right);
            }
            if(maxSum < curSum) {
                maxSum = curSum;
                ans = level;
            }
        }
        return ans;
    }
}
