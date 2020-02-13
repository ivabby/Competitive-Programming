class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> a(n , vector<int> (m,1));
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                long long s = 0;
                for(int r=max(0,i-K);r<=min(n-1,i+K);r++)
                    for(int c=max(0,j-K);c<=min(m-1,j+K);c++)
                        s+=mat[r][c];
                
                a[i][j] = s;
            }
        
        return a;
    }
};
