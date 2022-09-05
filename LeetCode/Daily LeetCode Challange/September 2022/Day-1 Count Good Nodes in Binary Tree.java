class Solution {
    private int goodNodesHelper(TreeNode root,int mx) {
        if(root == null)
            return 0;
        int cnt = 0;
        if(root.val >= mx)
            cnt++;
        mx = Math.max(mx , root.val);
        cnt += goodNodesHelper(root.left , mx) + goodNodesHelper(root.right , mx);
        
        return cnt;
    }
    public int goodNodes(TreeNode root) {
        return goodNodesHelper(root , -10000);
    }
}
