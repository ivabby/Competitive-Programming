class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            vector<int> a(n);
            ans.push_back(a);
        }
        int c = 1;
        int r1 = 0 , r2 = n-1 , c1 = 0 , c2 = n-1;
        while(r1<=r2 && c1<=c2)
        {
            //  Move right
            for(int i=c1;i<=c2;i++)
                ans[r1][i] = c , c++;
            
            //  Move down
            for(int i=r1+1;i<=r2;i++)
                ans[i][c2] = c , c++;
            
            //  Move left
            for(int i=c2-1;i>=c1 && r1!=r2;i--)
                ans[r2][i] = c , c++;
            
            //  Move up
            for(int i=r2-1;i>r1 && c1!=c2;i--)
                ans[i][c1] = c , c++;
            
            r1++;
            r2--;
            c1++;
            c2--;
        }
        
        return ans;
    }
};
