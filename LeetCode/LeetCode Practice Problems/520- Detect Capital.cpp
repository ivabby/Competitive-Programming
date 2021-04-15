class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt1 = 0 ,cnt2 = 0;
        
        for(char c: word) {
            if(c>='A' && c<='Z') cnt1++;
            else cnt2++;
        }
        
        if(cnt1 == word.length() || cnt2 == word.length()) return true;
        
        if(cnt1 == 1 && (word[0]>='A' && word[0]<='Z')) return true;
        return false;
    }
};
