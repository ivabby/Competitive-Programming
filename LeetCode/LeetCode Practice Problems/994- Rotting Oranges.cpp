class Solution {
public:
    int n,m;
    
    bool check(int i,int j) {
        return i<n && j<m && i>=0 && j>=0;
    }
    
    int orangesRotting(vector<vector<int>>& a) {
        queue<pair<int,int>> q;
        n = a.size();
        m = a[0].size();
        int cnt = 0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[i][j] == 2) {
                    q.push({i,j});
                } else if(a[i][j] == 1) {
                    cnt++;
                }
            }
        }
        
        int ans = (q.empty())?0:-1;
        while(!q.empty()) {
            int k = q.size();
            ans++;
            while(k--) {               
                pair<int,int> p = q.front();
                q.pop();

                int x = p.first;
                int y = p.second;

                if(check(x-1,y) && a[x-1][y] == 1) {
                    cnt--;
                    a[x-1][y] = 2;
                    q.push({x-1,y});
                } 
                if(check(x+1,y) && a[x+1][y] == 1) {
                    cnt--;
                    a[x+1][y] = 2;
                    q.push({x+1,y});
                }
                if(check(x,y-1) && a[x][y-1] == 1) {
                    cnt--;
                    a[x][y-1] = 2;
                    q.push({x,y-1});
                }
                if(check(x,y+1) && a[x][y+1] == 1) {
                    cnt--;
                    a[x][y+1] = 2;
                    q.push({x,y+1});
                }
            }
            
        }
        
        if(cnt != 0) {
            return -1;
        }
        
        return ans;
    }
};
