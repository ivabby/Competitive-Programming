class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        int cnt[] = new int[26];
        
        for(char c: allowed.toCharArray()) {
            cnt[c - 'a']++;
        }
        
        int ans = 0;
        
        for(String word: words) {
            int i = 0;
            
            while(i < word.length() && cnt[word.charAt(i) - 'a'] > 0) {
                i++;
            }
            
            if(i == word.length()) {
                ans++;
            }
        }
        
        return ans;
    }
}
