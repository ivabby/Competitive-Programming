class Solution {
    public char findTheDifference(String s, String t) {
        int cnt[] = new int[26];
        for(char c: s.toCharArray()) {
            cnt[c - 'a']++;
        }
        for(char c: t.toCharArray()) {
            cnt[c - 'a']--;
        }
        char ch = ' ';
        for(int i=0;i<26;i++) {
            if(cnt[i] == -1) {
                ch = (char)(i + 'a');
                break;
            }
        }
        return ch;
    }
}
