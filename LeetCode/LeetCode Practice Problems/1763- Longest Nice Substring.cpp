class Solution {
public:
    string longestNiceSubstring(string s) {
        
        int n = s.length();
        string ans = "";
        
        for(int i=0;i<n;i++) {
            vector<int> f1(26,0) , f2(26,0);
            int k = 0;
            for(int j=i;j<n;j++) {
                k++;
                if(s[j] >= 'A' && s[j] <= 'Z') {
                    f1[s[j] - 'A']++;
                } else {
                    f2[s[j] - 'a']++;
                }
                
                bool f = true;
                for(int c=0;c<26;c++) {
                    if((f1[c] > 0 && f2[c] == 0) || (f1[c] == 0 && f2[c] > 0)) {
                        f = false;
                        break;
                    }
                }
                
                if(f && ans.length() < k) {
                    ans = s.substr(i,k);
                }
            }
        }
        
        return ans;
        
    }
};
