class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n , vector<int> (n,0));
        
        int c = 1;
        int i = 0 , j = n - 1;
        
        while(i <= j)
        {
            for(int k=i;k<=j;k++)
                a[i][k] = c++;
            
            for(int k=i+1;k<=j;k++)
                a[k][j] = c++;
            
            for(int k=j-1;k>=i;k--)
                a[j][k] = c++;
            
            for(int k=j-1;k>i;k--)
                a[k][i] = c++;
            i++;
            j--;
        }
        
        return a;
    }
};
