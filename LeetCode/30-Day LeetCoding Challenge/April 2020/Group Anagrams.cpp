class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        vector<vector<string>> ans;
        map<string , vector<string>> m;
        
        for(string s : a)
        {
            string b = s;
            sort(s.begin() , s.end());
            m[s].push_back(b);
        }
        
        for(auto i : m)
        {
            vector<string> s;
            for(auto j : i.second)
                s.push_back(j);
            ans.push_back(s);
        }
        
        return ans;
    }
};
