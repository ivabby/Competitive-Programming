class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        vector<int> res;
        
        int ans = 0;
        for(auto i : costs)
        {
            ans += i[0];
            res.push_back(i[1] - i[0]);
        }
        
        sort(res.begin() , res.end());
        for(int i=0;i<n/2;i++)
            ans += res[i];
        
        return ans;
    }
};
