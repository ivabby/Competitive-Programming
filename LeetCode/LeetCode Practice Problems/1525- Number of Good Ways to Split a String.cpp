class Solution {
public:
    int numSplits(string s) {
        int diff = 0 , ans = 0;
        int n = s.length();
        vector<int> f1(26,0),f2(26,0);
        vector<int> l(n) , r(n);
        int i = 0;
        
        for(char c: s) {
            f1[c - 'a']++;
            if(f1[c - 'a'] == 1) diff++;
            
            l[i++] = diff;
        }
        diff = 0;
        
        for(int i=n-1;i>=0;i--) {
            f2[s[i] - 'a']++;
            if(f2[s[i] - 'a'] == 1) diff++;
            
            r[i] = diff;
        }
        
        for(int i=0;i<n-1;i++) {
            if(l[i] == r[i+1]) ans++;
        }
        
        return ans;
    }
};
