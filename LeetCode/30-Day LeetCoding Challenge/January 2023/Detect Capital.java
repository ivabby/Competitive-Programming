class Solution {
    public boolean detectCapitalUse(String word) {
        boolean isFirstCapital = false;
        int cnt = 0;
        isFirstCapital = word.charAt(0) >= 'A' && word.charAt(0) <= 'Z';
        for(int i=1;i<word.length();i++) {
            char ch = word.charAt(i);
            if(ch >= 'A' && ch <= 'Z')
                cnt++;
        }
        if(isFirstCapital && (cnt == 0 || cnt == word.length() - 1))
            return true;
        if(cnt == 0)
            return true;
        return false;
    }
}
