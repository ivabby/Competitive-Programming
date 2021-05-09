class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> a;
        int n = s.length();
        for(int i=0;i<n;i++) {
            int cnt = 1;
            while(i+1<n && s[i] == s[i+1]) {
                i++;
                cnt++;
            }
            
            a.push_back(cnt);
        }
        
        int ans = 0;
        for(int i=0;i<a.size()-1;i++) {
            ans += min(a[i] , a[i+1]);
        }
        
        return ans;
    }
};
