class Solution {
    public boolean areOccurrencesEqual(String s) {
        int cnt[] = new int[26];
        
        for(char c: s.toCharArray()) {
            cnt[c - 'a']++;
        }
        
        int occurence = -1;
        for(int i=0;i<26;i++) {
            if(cnt[i] == 0) continue;
            if(occurence == -1) occurence = cnt[i];
            
            if(cnt[i] != occurence) return false;
        }
        
        return true;
    }
}
