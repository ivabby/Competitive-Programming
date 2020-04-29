class Solution {
    public int lengthOfLastWord(String s) {
        String ss[] = s.trim().split(" ");
        return ss[ss.length - 1].length();
    }
}
