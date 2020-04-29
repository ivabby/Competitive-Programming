class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> m;
        vector<vector<string>> ans;
        int cnt = 0;
        for(auto i : strs)
        {
            string st = i;
            sort(st.begin() , st.end());
            int pos = m[st];
            if(pos == 0)
            {
                m[st] = ans.size() + 1;
                ans.push_back({i});
            }
            else
                ans[pos-1].push_back(i);
        }
        
        return ans;
    }
};
