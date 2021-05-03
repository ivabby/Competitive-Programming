class Solution {
public:
    int secondHighest(string s) {
        int mx = -1;
        
        for(char c: s) {
            if(c>='0' && c<='9')
                mx = max(mx , c-'0');
        }
        
        if(mx == -1)
            return -1;
        
        int ans = -1;
        for(char c: s) {
            if(c >='0' && c<='9') {
                int v = c-'0';
                if(v < mx)
                    ans = max(ans , v);
            }
        }
        
        return ans;
    }
};
