class Solution {
    public int countCharacters(String[] words, String chars) {
        int cnt[] = new int[26];
        for(char ch: chars.toCharArray()) {
            cnt[ch - 'a']++;
        }
        int ans = 0;
        for(String word: words) {
            int freq[] = new int[26];
            boolean flag = true;
            for(char ch: word.toCharArray()) {
                freq[ch - 'a']++;
                if(freq[ch - 'a'] > cnt[ch - 'a']) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans+=word.length();
        }
        return ans;
    }
}
