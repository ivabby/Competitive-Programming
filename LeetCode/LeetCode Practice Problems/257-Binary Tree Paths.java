class Solution {
    
    public void findPaths(TreeNode root,List<String> ans,String cur) {
        if(root == null) return;
        String path = cur;
        if(cur.length() > 0) {
            path = path + "->";
        }
        path = path + Integer.toString(root.val);
        
        if(root.left == null && root.right == null) {
            ans.add(path);
            return;
        }
        findPaths(root.left , ans , path);
        findPaths(root.right , ans , path);
    }
    
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> ans = new ArrayList();
        findPaths(root,ans,"");
        return ans;
    }
}
