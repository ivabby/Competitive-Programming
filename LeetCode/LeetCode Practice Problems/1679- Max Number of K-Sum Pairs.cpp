class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        
        for(auto i: nums)
            m[i]++;
        
        int ans = 0;
        for(auto i: m) {
            int first = i.first;
            int second = k - i.first;
            if(m.find(second) != m.end()) {
                int mn = min(m[second] , m[first]);
                if(first == second) {
                    mn = m[first]/2;
                }
                ans += mn;
                m[second] -= mn;
                m[first] -= mn;
            }
        }
        
        return ans;
    }
};
