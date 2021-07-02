class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> ans(n,INT_MAX);
        int pos = -1;
        
        for(int i=0;i<n;i++) {
            if(c == s[i]) {
                pos = i;
            }
            if(pos == -1) continue;
            ans[i] = i - pos;
        }
        
        pos = -1;
        for(int i=n-1;i>=0;i--) {
            if(c == s[i]) {
                pos = i;
            }
            
            if(pos == -1) continue;
            ans[i] = min(ans[i] , pos - i);
        }
        
        
        return ans;
    }
};
