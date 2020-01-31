class Solution {
public:
    int numDecodings(string s) {
        if(s == "0" || s[0] == '0')
            return 0;
        int n = s.length();
        vector<int> cnt(n+1 , 0);
        cnt[0] = 1;
        cnt[1] = 1;
        for(int i=2;i<=n;i++){
            if(s[i-1] != '0')
                cnt[i] = cnt[i-1];
            int v = (s[i-2] - '0')*10 + (s[i-1] - '0');
            if(v<=26 && s[i-2]!='0')
                cnt[i]+=cnt[i-2];
        }
        return cnt[n];
    }
};
