class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int ans = n;
        vector<vector<bool>> a(n,vector<bool>(n,0));
        
        for(int i=0;i<n;i++)
            a[i][i] = 1;
        
        for(int i=0;i<n-1;i++) {
            if(s[i] == s[i+1]) {
                a[i][i+1] = true;
                ans++;
            }    
        }  
        
        for(int k=3;k<=n;k++) {
            for(int i=0;i<n-k+1;i++) {
                int j = i+k-1;
                
                if(s[i] == s[j] && a[i+1][j-1]) {
                    a[i][j] = true;
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
