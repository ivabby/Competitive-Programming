class Solution {
    public int minSteps(String s, String t) {
        int cnt[] = new int[26];
        
        for(char c: s.toCharArray()) {
            cnt[c - 'a']++;
        }
        
        for(char c: t.toCharArray()) {
            if(cnt[c - 'a'] > 0) {
                cnt[c - 'a']--;
            }
        }
        
        int ans = 0;
        for(int c: cnt) {
            ans += c;
        }
        
        return ans;
    }
}
