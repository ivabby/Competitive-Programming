class Solution {
    class Node {
        TreeNode root;
        // int level;
        int x,y;
        Node(TreeNode root,int x,int y) {
            this.root = root;
            this.x = x;
            this.y = y;
        }
    }
    public List<List<Integer>> verticalTraversal(TreeNode root) {
        PriorityQueue<Node> q = new PriorityQueue<>((a,b) -> a.x == b.x && a.y == b.y ? a.root.val - b.root.val : (a.x == b.x ? a.y - b.y : a.x - b.x));
        List<List<Integer>> ans = new ArrayList();
        
        if(root != null)
            q.add(new Node(root, 0, 0));
        
        Map<Integer,List<Integer>> map = new TreeMap();
        while(!q.isEmpty()) {
            Node node = q.poll();
            if(!map.containsKey(node.y))
                map.put(node.y , new ArrayList());
            map.get(node.y).add(node.root.val);
            
            TreeNode tmp = node.root;
            if(tmp.left != null)
                q.add(new Node(tmp.left , node.x + 1, node.y - 1));
            if(tmp.right != null)
                q.add(new Node(tmp.right , node.x + 1, node.y + 1));
        }
        
        for(Integer key: map.keySet()) {
            List<Integer> list = map.get(key);
            // Collections.sort(list);
            ans.add(list);
        }
        return ans;
    }
}
