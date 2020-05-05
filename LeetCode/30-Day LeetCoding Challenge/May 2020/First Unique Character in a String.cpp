class Solution {
public:
    int firstUniqChar(string s) {
        map<char,vector<int>> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]].push_back(i);
        }
        
        
        int p = -1;
        for(auto i : m)
        {
            if(i.second.size() == 1)
            {
                if(p == -1)
                    p = i.second[0];
                else
                    p = min(p , i.second[0]);
            }
        }
        
        
        return p;
    }
};
