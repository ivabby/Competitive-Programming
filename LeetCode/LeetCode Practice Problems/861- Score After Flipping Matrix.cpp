class Solution {
public:
    int matrixScore(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        
        int ans = 0;
        
        // Traverse Each Row
        for(int i=0;i<n;i++) {
            
            //  If the first index of the ith array is 0
            if(a[i][0] == 0) {
                for(int j=0;j<m;j++) {
                    a[i][j] = 1 - a[i][j];
                }
            }
            
            int cur = 1;
            // Calculate answer
            for(int j=m-1;j>=0;j--) {
                ans += (cur * a[i][j]);
                cur *= 2;
            }
        }
        
        int cur = 1;
        
        //  Traverse Using Column
        for(int j=m-1;j>=0;j--) {
            int ones = 0;
            
            for(int i=0;i<n;i++) {
                ones += a[i][j];
            }
            
            int zeroes = n - ones;
            if(zeroes > ones) {
                ans = ans - ones * cur;
                ans += zeroes * cur;
            }
            
            cur *= 2;
        }
        
        return ans;
    }
};
