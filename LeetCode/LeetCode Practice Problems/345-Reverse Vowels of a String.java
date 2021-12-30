class Solution {
    public boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    public String findVowels(String s) {
        String vowels = "";
        for(char ch: s.toCharArray()) {
            if(isVowel(Character.toLowerCase(ch))) {
                vowels = vowels + ch;
            }
        }
        return vowels;
    }
    public String reverseVowels(String s) {
        String vowels = findVowels(s);
        int i = vowels.length() - 1;
        String ans = "";
        for(char ch: s.toCharArray()) {
            if(isVowel(Character.toLowerCase(ch))) {
                ans = ans + vowels.charAt(i);
                i--;
            }
            else {
                ans = ans + ch;
            }
        }
        return ans;
    }
}
