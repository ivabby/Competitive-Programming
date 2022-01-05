class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> ans = new ArrayList();
        int n = s.length();
        boolean dp[][] = new boolean[n][n];
        dfs(s,0,dp,new ArrayList(),ans);
        return ans;
    }
    void dfs(String s,int start,boolean[][] dp,List<String> cur,List<List<String>> ans) {
        if(start >= s.length()) {
            ans.add(new ArrayList<>(cur));
        }
        
        for(int end=start;end<s.length();end++) {
            if(s.charAt(start) == s.charAt(end) && (end-start<=2 || dp[start+1][end-1])) {
                dp[start][end] = true;
                cur.add(s.substring(start,end+1));
                dfs(s,end+1,dp,cur,ans);
                cur.remove(cur.size() - 1);
            }
        }
    }
}
