class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> pos;
        
        int n = s1.length();
        for(int i=0;i<n;i++) {
            if(s1[i] != s2[i]) {
                pos.push_back(i);
            }
        }
        
        if(pos.size() == 1 || pos.size() > 2) {
            return false;
        } 
        
        if(pos.size() == 0) {
            return true;
        }
        
        return s1[pos[0]] == s2[pos[1]] && s1[pos[1]] == s2[pos[0]];
    }
};
