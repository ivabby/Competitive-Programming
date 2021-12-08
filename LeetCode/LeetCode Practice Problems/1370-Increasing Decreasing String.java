class Solution {
    public String sortString(String s) {
        int cnt[] = new int[26];
        int c = 0;
        
        for(char ch:s.toCharArray()) {
            cnt[ch - 'a']++;
            c++;
        }
        
        boolean f = true;
        String ans = "";
        
        while(c > 0) {
            if(f) {
                for(int i=0;i<26;i++) {
                    if(cnt[i] == 0) continue;
                    ans = ans + (char)(i + 'a');
                    cnt[i]--;
                    c--;
                }
            } else {
                for(int i=25;i>=0;i--) {
                    if(cnt[i] == 0) continue;
                    ans = ans + (char)(i + 'a');
                    cnt[i]--;
                    c--;
                }
            }
            f = !f;
        }
        
        return ans;
    }
}
