class Solution {
public:
    bool buddyStrings(string a, string b) {
        vector<int> pos;
        vector<int> cnt(26 , 0);
        
        int n1 = a.length() , n2 = b.length();
        if(n1 != n2) 
            return false;
        
        bool duplicate = false;
        
        for(int i=0;i<n1;i++) {
            if(a[i] != b[i]) {
                pos.push_back(i);
            } else {
                cnt[a[i] - 'a']++;
                if(cnt[a[i] - 'a'] > 1)
                    duplicate = true;
            }
        }
        
        if(pos.size() == 2 && a[pos[0]] == b[pos[1]] && a[pos[1]] == b[pos[0]]) {
            return true;     
        }
        
        
        return pos.size() == 0 && duplicate;
    }
};
