class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int s = 0;
        
        for(int i=0;i<n;i++) {
            s += mat[i][i];
        }
        
        int j=0;
        for(int i=n-1;i>=0;i--) {
            if(i != j) {
                s += mat[i][j];
            }
            j++;
        }
        
        return s;
    }
};
