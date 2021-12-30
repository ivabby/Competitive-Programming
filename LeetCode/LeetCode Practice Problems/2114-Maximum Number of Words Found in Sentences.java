class Solution {
    public int mostWordsFound(String[] sentences) {
        int ans = 0;
        for(String sentence: sentences) {
            ans = Math.max(ans , (sentence.split(" ")).length);
        }
        return ans;
    }
}
