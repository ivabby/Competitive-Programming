class Solution {
    public int numSplits(String s) {
        int freq[] = new int[26];
        int distinct = 0;
        
        for(char c: s.toCharArray()) {
            freq[c - 'a']++;
            if(freq[c - 'a'] == 1) 
                distinct++;
        }
        
        int leftDistinct = 0 , rightDistinct = distinct;
        int ans = 0 , idx = 0;
        int freq2[] = new int[26];
        
        while(leftDistinct <= rightDistinct && idx < s.length()) {
            char c = s.charAt(idx);
            
            freq[c - 'a']--;
            if(freq[c - 'a'] == 0) {
                rightDistinct--;
            }
            
            freq2[c - 'a']++;
            if(freq2[c - 'a'] == 1) {
                leftDistinct++;
            }
            
            ans += (leftDistinct == rightDistinct)?1:0;
            idx++;
        }
        
        return ans;
    }
}
