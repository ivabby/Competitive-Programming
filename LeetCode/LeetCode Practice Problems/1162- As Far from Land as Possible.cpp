class Solution {
public:
    
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        
        queue<pair<int,int>> q;
        bool vis[n][n];
        memset(vis,false,sizeof vis);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1)
                {
                    q.push({i,j});
                    vis[i][j] = true;   
                }
            }
        
        int r[] = {-1,1,0,0};
        int c[] = {0,0,1,-1};
        
        int cnt = 0;
        
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0;i<sz;i++)
            {
                pair<int,int> p =  q.front();
                q.pop();
                
                for(int k=0;k<4;k++)
                {
                    int row = p.first + r[k];
                    int col = p.second + c[k];
                    if(row >= 0 && row < n && col>=0 && col < n && !vis[row][col]){
                        vis[row][col] = true;
                        q.push({row,col});
                    }
                }
            }
            cnt++;
        }
                cnt--;
        if(cnt > 0)
            return cnt;
        else
            return -1;
    }
};
