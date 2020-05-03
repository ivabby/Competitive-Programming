class Solution {
public:
    int cnt = 0 , n , m;
    vector<vector<char>> a;
    void count(int i,int j)
    {
        if(i<0 || j<0 || i==n || j==m) return;
        if(a[i][j] == '0') return;
        
        a[i][j] = '0';
        count(i+1,j);
        count(i-1,j);
        count(i,j+1);
        count(i,j-1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {    
        a = grid;
        if(grid.size() == 0) return 0;
        
        n = grid.size();
        m = grid[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j] == '1')
                {
                    cnt++;
                    count(i,j);
                }
                    
        return cnt;
    }
};
