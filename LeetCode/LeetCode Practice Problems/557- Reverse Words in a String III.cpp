class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        int n = s.length();
        
        string ans = "";
        string cur = "";
        
        for(int i=0;i<n;i++) {
            if(s[i] != ' ') {
                cur = s[i] + cur;
            } else {
                if(ans != "")
                    ans += " ";
                ans += cur;
                cur = "";
            }
        }
        
        return ans;
        
    }
};
