class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int a[grid.size()][grid[0].size()];
        set<pair<int,int>> p;
        for(int i=0;i<grid.size();i++)
        {
            int cnt = 0;
            for(int j=0;j<grid[i].size();j++)
            {
                cnt+=grid[i][j];
                a[i][j] = grid[i][j];
            }
            if(cnt > 1)
            {
                for(int j=0;j<grid[i].size();j++)
                    if(grid[i][j] == 1)
                        p.insert(make_pair(i,j));
            }
        }
        
        for(int i=0;i<grid[0].size();i++)
        {
            int cnt = 0;
            for(int j=0;j<grid.size();j++)
            {
                cnt+=grid[j][i];
            }
            if(cnt > 1)
            {
                for(int j=0;j<grid.size();j++)
                    if(a[j][i] == 1)
                        p.insert(make_pair(j,i));
            }
        }
        return p.size();
    }
};
