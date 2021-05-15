class Solution {
public:
    double average(vector<int>& salary) {
        int mn = INT_MAX , mx = 0;
        int s = 0;
        
        for(auto i: salary) {
            s += i;
            mn = min(mn , i);
            mx = max(mx , i);
        }
        
        s -= mn;
        s -= mx;
        
        return (double) s / (double)(salary.size() - 2);
        
    }
};
