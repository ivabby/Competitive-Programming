class Solution {
    public List<String> commonChars(String[] words) {
        int cnt[] = new int[26];
        Arrays.fill(cnt , Integer.MAX_VALUE);
        for(String word: words) {
            int f[] = new int[26];
            for(char c: word.toCharArray()) {
                f[c - 'a']++;
            }
            for(int i=0;i<26;i++) {
                cnt[i] = Math.min(cnt[i] , f[i]);
            }
        }
        List<String> ans = new ArrayList();
        for(int i=0;i<26;i++) {
            while(cnt[i] > 0) {
                ans.add((char)(i + 'a') + "");
                cnt[i]--;
            }
        }
        return ans;
    }
}
