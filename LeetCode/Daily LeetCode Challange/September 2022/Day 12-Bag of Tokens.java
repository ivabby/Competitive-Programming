class Solution {
    public int bagOfTokensScore(int[] tokens, int P) {
        Arrays.sort(tokens);
        int ans = 0 , score = 0;
        int i = 0 , n = tokens.length - 1;
        
        while(i <= n && (P >= tokens[i] || score > 0)) {
            while(i <= n && P >= tokens[i]) {
                P -= tokens[i++];
                score++;
            }
            
            ans = Math.max(ans , score);
            if(i <= n && score > 0) {
                P += tokens[n--];
                score--;
            }
        }
        
        return ans;
    }
}
