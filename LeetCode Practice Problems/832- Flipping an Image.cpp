class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        if(A.empty())
            return A;
        
        int n = A.size();
        int m = A[0].size();
        vector<vector<int>> s(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            int k = m-1;
            for(int j=0;j<m;j++,k--)
                s[i][k] = A[i][j];
        }
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                s[i][j] = abs(1-s[i][j]);
        
        return s;
    }
};
