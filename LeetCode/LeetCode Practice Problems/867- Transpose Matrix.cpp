class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int n = A.size();
        int m = A[0].size();
        vector<vector<int>> a(m , vector<int>(n, 0));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                a[i][j] = A[j][i];
        return a;
    }
};
