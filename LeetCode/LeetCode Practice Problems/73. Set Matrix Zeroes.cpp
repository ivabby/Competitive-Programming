class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(matrix[i][j] == 0)
                v.push_back(make_pair(i,j));
        
        for(auto p : v)
        {
            int r = p.first , c = p.second;
            for(int i=0;i<m;i++)
                matrix[r][i] = 0;
            
            for(int i=0;i<n;i++)
                matrix[i][c] = 0;
        }
    }
};
