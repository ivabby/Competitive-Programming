class Solution {
public:
    int numSpecial(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        
        vector<int> row(n,0),col(m,0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[i][j] == 1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(row[i] == 1 && col[j] == 1 && a[i][j] == 1) {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
