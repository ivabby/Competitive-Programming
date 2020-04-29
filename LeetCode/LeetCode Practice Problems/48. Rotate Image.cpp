class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int i = 0 , j = n-1;
        while(i<j)
        {
            
            int t1 = matrix[i][i];
            int t2 = matrix[i][j];
            int t3 = matrix[j][j];
            int t4 = matrix[j][i];

            matrix[i][j] = t1;
            matrix[j][j] = t2;
            matrix[j][i] = t3;
            matrix[i][i] = t4;
            for(int k=1;k<j-i;k++)
            {
                int t1 = matrix[i][i+k];
                int t2 = matrix[i+k][j];
                int t3 = matrix[j][j-k];
                int t4 = matrix[j-k][i];
                matrix[i][i+k] = t4;
                matrix[i+k][j] = t1;
                matrix[j][j-k] = t2;
                matrix[j-k][i] = t3;
            }
            i++;
            j--;
        }
        
    }
};
