class Solution {
    private int dfs(Map<Integer,List<Integer>> adj,List<Boolean> hasApple,int parent,int node) {
        if(!adj.containsKey(node))
            return 0;
        int totalTime = 0 , childTime = 0;
        for(int child: adj.get(node)) {
            if(child == parent) continue;
            childTime = dfs(adj,hasApple,node,child);

            if(childTime > 0 || hasApple.get(child))
                totalTime += childTime + 2;
        }
        return totalTime;
    }

    private void addEdge(Map<Integer,List<Integer>> adj,int x,int y) {
        if(!adj.containsKey(x))
            adj.put(x , new ArrayList());
        adj.get(x).add(y);
    }
    public int minTime(int n, int[][] edges, List<Boolean> hasApple) {
        Map<Integer,List<Integer>> adj = new HashMap();
        for(int edge[]: edges) {
            int a = edge[0];
            int b = edge[1];
            addEdge(adj , a , b);
            addEdge(adj , b , a);
        }
        return dfs(adj,hasApple,-1,0);
    }
}
