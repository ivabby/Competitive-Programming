class Solution {
    
    List<List<Integer>> ans = new ArrayList();
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        List<Integer> path = new ArrayList();
        
        dfs(graph , 0, path);
        
        return ans;
    }
    
    public void dfs(int[][] graph,int src,List<Integer> path) {
        path.add(src);
        
        if(src == graph.length - 1) {
            ans.add(new ArrayList<Integer>(path));
            return;
        }
        
        for(int next: graph[src]) {
            dfs(graph,next,path);
            path.remove(path.size() - 1);
        }
    }
}
