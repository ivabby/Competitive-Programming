class Solution {
public:
    int maxRepeating(string s, string word) {
        int ans = 0, n = s.length();
        int l = word.length();
        
        for(int i=0;i<n;i++) {
            int mx = 0;
            int j = i;
            
            while(i+l<=n && s.substr(i,l) == word) {
                mx++;
                i+=l;
            }
            i = j;
            
            ans = max(ans , mx);
            
        }
        
        return ans;
    }
};
