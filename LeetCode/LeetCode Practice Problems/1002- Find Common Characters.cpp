class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> ans;
        int n = A.size();
        vector<vector<int>> cnt(n,vector<int>(26,0));
        
        for(int i=0;i<n;i++) {
            for(auto j:A[i])
                cnt[i][j-'a']++;
        }
        
        for(int i=0;i<26;i++) {
            int mn = cnt[0][i];
            for(int j=0;j<n;j++) {
                mn = min(mn , cnt[j][i]);
            }
            char ch = i+'a';
            string s;
            s+=ch;
            while(mn--) {
                ans.push_back(s);
            }
        }
        
        return ans;
        
    }
};
