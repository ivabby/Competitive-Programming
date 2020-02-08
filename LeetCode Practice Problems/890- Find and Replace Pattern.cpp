class Solution {
public:
    bool check(string s,string p)
    {
        map<char , char> m1,m2;
        for(int i=0;i<s.length();i++)
        {
            char c1 = s[i];
            char c2 = p[i];
            if(m1.find(c1) == m1.end()) m1[c1] = c2;
            if(m2.find(c2) == m2.end()) m2[c2] = c1;
            if(m1[c1] != c2) return false;
            if(m2[c2] != c1) return false;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string s : words)
            if(check(s , pattern))
                ans.push_back(s);
        
        return ans;
    }
};
