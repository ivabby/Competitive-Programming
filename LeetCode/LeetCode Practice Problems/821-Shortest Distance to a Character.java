class Solution {
    public int[] shortestToChar(String s, char c) {
        int n = s.length();
        int ans[] = new int[n];
        Arrays.fill(ans , Integer.MAX_VALUE);
        
        int cnt = -1;
        for(int i=0;i<n;i++) {
            char ch = s.charAt(i);
            if(ch == c) cnt = 0;
            if(cnt == -1) continue;
            ans[i] = cnt;
            cnt++;
        }
        
        cnt = -1;
        for(int i=n-1;i>=0;i--) {
            char ch = s.charAt(i);
            if(ch == c) cnt = 0;
            if(cnt == -1) continue;
            ans[i] = Math.min(ans[i] , cnt);
            cnt++;
        }
        
        return ans;
    }
}
