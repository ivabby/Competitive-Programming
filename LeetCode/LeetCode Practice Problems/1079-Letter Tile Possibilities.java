class Solution {
    public int numTilePossibilities(String tiles) {
        int cnt[] = new int[26];
        for(char c: tiles.toCharArray()) {
            cnt[c - 'A']++;
        }
        
        return dfs(cnt);
    }
    
    public int dfs(int cnt[]) {
        int ans = 0;
        for(int i=0;i<26;i++) {
            if(cnt[i] == 0) continue;
            cnt[i]--;
            ans++;
            ans += dfs(cnt);
            cnt[i]++;
        }
        return ans;
    }
}
