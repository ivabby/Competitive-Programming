class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;
        for(auto i: accounts) {
            int s = 0;
            for(auto j: i) {
                s += j;
            }
            
            mx = max(mx , s);
        }
        
        return mx;
    }
};
