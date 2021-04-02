class Solution {
public:
    int minSteps(int n) {
        vector<int> a(n+10,INT_MAX);
        
        a[1] = 0;
        for(int i=1;i<=n;i++) {
            int val = a[i] + 1;
            for(int j=i+i;j<=n;j+=i) {
                val++;
                a[j] = min(a[j] , val);
            }
        }
        
        
        return a[n];
    }
};
