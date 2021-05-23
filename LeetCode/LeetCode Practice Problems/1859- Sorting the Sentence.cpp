class Solution {
public:
    string sortSentence(string s) {
        s+=" ";
        
        map<int,string> m;
        string cur = "";
        
        for(int i=0;i<s.length() - 1;i++) {
            if(s[i+1] == ' ') {
                int pos = s[i] - '0';
                m[pos] = cur;
                cur = "";
                i++;
            } else {
                cur += s[i];
            }
        }
        
        string ans = "";
        for(auto i: m) {
            if(ans != "") ans += " ";
            ans += i.second;
        }
        
        return ans;
    }
};
