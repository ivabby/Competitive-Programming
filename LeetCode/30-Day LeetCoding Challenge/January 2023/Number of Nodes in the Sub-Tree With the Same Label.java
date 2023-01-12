class Solution {
    private void addEdge(int u,int v,Map<Integer,List<Integer>> map) {
        if(!map.containsKey(u))
            map.put(u,new ArrayList());
        List<Integer> list = map.get(u);
        list.add(v);
    }

    private int[] dfs(int parent,int u,Map<Integer,List<Integer>> map,char[] labels,int[] ans) {
        int cnt[] = new int[26];
        cnt[labels[u] - 'a'] = 1;
        
        if(!map.containsKey(u))
            return cnt;
        
        for(int child: map.get(u)) {
            if(child == parent) continue;

            int childCnt[] = dfs(u,child,map,labels,ans);
            for(int i=0;i<26;i++)
                cnt[i] += childCnt[i];
        }

        ans[u] = cnt[labels[u] - 'a'];
        return cnt;
    }
    
    public int[] countSubTrees(int n, int[][] edges, String labels) {
        Map<Integer,List<Integer>> map = new HashMap();

        for(int edge[]: edges) {
            int u = edge[0] , v = edge[1];
            addEdge(u,v,map);
            addEdge(v,u,map);
        }
        
        int ans[] = new int[n];
        dfs(-1,0,map,labels.toCharArray(),ans);
        return ans;
    }
}
