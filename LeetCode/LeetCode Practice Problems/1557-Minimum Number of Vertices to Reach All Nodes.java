class Solution {
    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {
        boolean vis[] = new boolean[n];
        
        for(List<Integer> edge: edges) {
            int u = edge.get(0);
            int v = edge.get(1);
            
            vis[v] = true;
        }
        
        List<Integer> ans = new ArrayList();
        
        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                ans.add(i);
            }
        }
        
        return ans;
    }
}
