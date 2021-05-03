class Solution {
public:
    string customSortString(string s, string t) {
        map<int,char> m1;
        map<char,int> m2;
        
        for(int i=0;i<s.length();i++) {
            m1[i] = s[i];
        }
        
        for(char c: t)
            m2[c]++;
        
        string ans = "";
        for(auto i: m1) {
            char c = i.second;
            while(m2[c] > 0) {
                m2[c]--;
                ans += c;
            }
        }
        
        for(auto i: m2) {
            char c = i.first;
            while(i.second--) {
                ans += c;
            }
        }
        
        return ans;
        
    }
};
