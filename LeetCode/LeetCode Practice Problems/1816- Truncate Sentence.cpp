class Solution {
public:
    string truncateSentence(string s, int k) {
        s += " ";
        string ans = "";
        string cur = "";
        int n = s.length();
        for(int i=0;i<n && k>0;i++) {
            if(s[i] != ' ') {
                cur += s[i];
            } else {
                ans += cur + ((k == 1)?"":" ");
                cur = "";
                k--;
            }
        }
        
        return ans;
        
    }
};
