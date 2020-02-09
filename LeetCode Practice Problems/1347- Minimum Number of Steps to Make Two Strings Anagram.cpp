class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> m;
        for(char c : s)
            m[c]++;
        
        for(char c : t)
            if(m[c] > 0)
                m[c]--;
        
        int ans = 0;
        for(auto i : m)
            ans+=i.second;
        
        return ans;
    }
};
