class Solution {
    List<Integer> ans = new ArrayList();
    
    public List<Integer> preorder(Node root) {
        if(root != null) {
            ans.add(root.val);
            for(Node child: root.children) {
                preorder(child);
            }
        }
        return ans;
    }
}
