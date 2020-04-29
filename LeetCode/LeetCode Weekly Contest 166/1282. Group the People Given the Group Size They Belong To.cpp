class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> m;
        vector<vector<int>> v;
        int j = 0;
        for(auto i : groupSizes)
        {
            m[i].push_back(j);
            j++;
            if(i == m[i].size())
            {
                v.push_back(m[i]);
                m[i].clear();
            }
        }
        return v;
    }
};
