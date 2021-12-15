class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        int ans = 0;
        int cnt[] = new int[26];
        
        for(char ch: brokenLetters.toCharArray()) {
            cnt[ch - 'a']++;
        }
        
        for(String word: text.split(" ")) {
            boolean flag = true;
            for(char c: word.toCharArray()) {
                if(cnt[c - 'a'] > 0) {
                    flag = false;
                    break;
                }
            }
            
            if(flag) ans++;
        }
        
        return ans;
    }
}
