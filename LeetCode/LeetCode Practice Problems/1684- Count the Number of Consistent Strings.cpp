class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s;
        
        for(char c: allowed) {
            s.insert(c);
        }
        
        int ans = 0;
        for(string a:words) {
            bool flag = true;
            for(char c: a) {
                if(s.find(c) == s.end()) {
                    flag = false;
                    break;
                }
            }
            
            if(flag) ans++;
        }
        
        return ans;
    }
};
