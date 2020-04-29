class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.size() == 0) return ans;
        
        int r2 = matrix.size() - 1;
        int c2 = matrix[0].size() - 1;
        int r1 = 0 , c1 = 0;
        
        while(r1<=r2 && c1<=c2)
        {
            // Move Right
            for(int i=c1;i<=c2;i++)
                ans.push_back(matrix[r1][i]);
        
            //  Move Down
            for(int i=r1+1;i<=r2;i++)
                ans.push_back(matrix[i][c2]);
            
            //  Move Left
            for(int i=c2-1;i>=c1 && r1!=r2;i--)
                ans.push_back(matrix[r2][i]);
            
            //  Move Up
            for(int i=r2-1;i>r1 && c1!=c2;i--)
                ans.push_back(matrix[i][c1]);
            
            r1++;
            r2--;
            c1++;
            c2--;
        }
        
        return ans;
    }
};
