class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> r(n , 100000) , c(m , 0);
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                r[i] = min(r[i] , matrix[i][j]);
            }
        }
        
        for(int j=0;j<m;j++) {
            for(int i=0;i<n;i++) {
                c[j] = max(c[j] , matrix[i][j]);
            }
        }
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == r[i] && matrix[i][j] == c[j]) 
                    ans.push_back(r[i]);
            }
        }
        
        
        return ans;
    }
};
