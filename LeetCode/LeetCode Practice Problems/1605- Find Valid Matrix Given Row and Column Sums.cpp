class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& row, vector<int>& col) {
        int n = row.size();
        int m = col.size();
        vector<vector<int>> ans(n,vector<int>(m));
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                ans[i][j] = min(row[i] , col[j]);
                row[i] -= ans[i][j];
                col[j] -= ans[i][j];
            }
        }
        
        return ans;
    }
};
