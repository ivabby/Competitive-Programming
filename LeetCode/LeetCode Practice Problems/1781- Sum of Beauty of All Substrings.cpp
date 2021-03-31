class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        int n = s.length();
        
        for(int i=0;i<n;i++) {
            int a[26] = {0};
            int cnt = 0;
            int mx = 0 , mn = INT_MAX;
            for(int j=i;j<n;j++) {
                a[s[j] - 'a']++;
                mx = max(mx , a[s[j] - 'a']);
                if(a[s[j] - 'a'] == 1) {
                    cnt++;
                }
                
                if(cnt > 1) {    
                    mn = INT_MAX;
                    for(int k=0;k<26;k++) 
                        if(a[k] != 0)
                            mn = min(mn , a[k]);
                    ans += (mx - mn);
                }
                
            }
        }
        
        return ans;
    }
};
