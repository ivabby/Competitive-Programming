class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> a(n , vector<int> (m , 0));
        
        for(int k=0;k<m;k++) {
            int row = 0;
            int col = k;
            
            vector<int> b;
            while(row<n && col<m) {
                b.push_back(mat[row][col]);
                row++;
                col++;
            }
            
            sort(b.begin(),b.end());
            int i = 0;
            row = 0 , col = k;
            while(row<n && col<m) {
                a[row][col] = b[i++];
                row++;
                col++;
            }
        }
        
        for(int k=1;k<n;k++) {
            int row = k;
            int col = 0;
            
            vector<int> b;
            while(row<n && col<m) {
                b.push_back(mat[row][col]);
                row++;
                col++;
            }
            
            sort(b.begin(),b.end());
            int i = 0;
            row = k , col = 0;
            while(row<n && col<m) {
                a[row][col] = b[i++];
                row++;
                col++;
            }
        }
        
        return a;
    }
};
