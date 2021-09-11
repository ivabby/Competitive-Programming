class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
        map<int,vector<int>> m;
        
        int n = a.size();
        for(int i=0;i<n;i++) {
            vector<int> v = m[a[i]];
            v.push_back(i);
            m[a[i]] = v;
        }
        
        vector<vector<int>> ans;
        for(auto i: m) {
            int sz = i.first;
            for(int j=0;j<i.second.size();) {
                int k = sz;
                vector<int> res;
                while(k--) {
                    res.push_back(i.second[j]);
                    j++;
                }
                ans.push_back(res);
            }
        }
        
        return ans;
        
    }
};
