class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> p;
        
        int r = 0;
        for(auto i : mat)
        {
            int cnt = 0;
            for(auto j : i)
            {
                if(j == 0) break;
                cnt++;
            }
            
            p.push_back(make_pair(cnt , r++));
        }
        
        sort(p.begin() , p.end());
        vector<int> ans;
        for(int i=0;i<k;++i)
                ans.push_back(p[i].second);
        
        return ans;
    }
};
