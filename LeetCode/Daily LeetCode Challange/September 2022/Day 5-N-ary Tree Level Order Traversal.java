class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        List<List<Integer>> ans = new ArrayList();
        
        Queue<Node> q = new LinkedList();
        if(root != null) {
            q.add(root);
        }
        
        while(!q.isEmpty()) {
            List<Integer> list = new ArrayList();
            int sz = q.size();
            while(sz-- > 0) {
                Node node = q.poll();
                list.add(node.val);
                
                for(Node child: node.children)
                    q.add(child);
            }
            ans.add(list);
        }
        
        return ans;
    }
}
