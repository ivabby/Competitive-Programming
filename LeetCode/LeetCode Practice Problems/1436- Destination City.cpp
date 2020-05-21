class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string , string> m;
        for(auto i : paths)
        {
            m[i[0]] = i[1];
            if(m.find(i[1]) == m.end())
                m[i[1]] = "";
        }
        
        string ans = "";
        for(auto i : m)
            if(i.second == "")
                ans = i.first;
        
        return ans;
    }
};
