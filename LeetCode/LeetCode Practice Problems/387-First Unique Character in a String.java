class Solution {
    public int firstUniqChar(String s) {
        int freq[] = new int[26];
        for(int idx=0;idx<s.length();idx++) {
            int pos = s.charAt(idx) - 'a';
            if(freq[pos] == 0) {
                freq[pos] = idx + 1;
            }
            else if(freq[pos] > 0) {
                freq[pos] *= -1;
            }
        }
        for(int idx=0;idx<s.length();idx++) {
            int pos = s.charAt(idx) - 'a';
            if(freq[pos] > 0) {
                return idx;
            }
        }
        
        return -1;
    }
}
