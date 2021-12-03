class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String a[] = new String[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        HashSet<String> s = new HashSet();
        
        for(String word: words) {
            String cur = "";
            for(char ch: word.toCharArray()) {
                cur = cur + a[ch - 'a'];
            }
            s.add(cur);
        }
        
        return s.size();
    }
}
