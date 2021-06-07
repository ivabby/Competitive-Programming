class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> a(n+1, INT_MAX);
        
        a[0] = 0;
        a[1] = 0;
        
        for(int i=0;i<n;i++) {
            if(i+1 <= n) {
                a[i+1] = min(a[i+1] , a[i] + cost[i]);
            }if(i+2 <= n) { 
                a[i+2] = min(a[i+2] , a[i] + cost[i]);
            }
        }
        
        return a[n];
    }
};
