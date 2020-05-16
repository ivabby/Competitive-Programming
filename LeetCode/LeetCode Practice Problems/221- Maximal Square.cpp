class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int maxi = 0;
        int n = matrix.size();
        
        if(n == 0)
            return 0;
        
        int m = matrix[0].size();
        int a[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                a[i][j] = matrix[i][j] - '0';
        
        for(int i=1;i<n;i++)
            for(int j=1;j<m;j++)
            {
                if(a[i-1][j] && a[i][j-1] && a[i-1][j-1] && a[i][j])
                    a[i][j] = min(a[i-1][j] , min(a[i][j-1] , a[i-1][j-1])) + 1;
            }
        
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                maxi = max(a[i][j] , maxi);
        
        return maxi*maxi;
    }
};
