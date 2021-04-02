class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string> m;
        for(auto i : knowledge) {
            m[i[0]] = i[1];
        }
        
        string ans = "";
        int n = s.length();
        for(int i=0;i<n;) {
            if(s[i] == '(') {
                i++;
                string key = "";
                while(i<n && s[i]!=')') {
                    key += s[i];
                    i++;
                }
                i++;
                if(m.find(key) != m.end()) ans+=m[key];
                else ans+="?";
            } else {
                while(i<n && s[i]!='(') {
                    ans += s[i];
                    i++;
                }
            }
        }
        
        return ans;
    }
};
