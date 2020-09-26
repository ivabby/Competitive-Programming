class Solution {
public:
    set<int> vis;
    int findCircleNum(vector<vector<int>>& a) {
        int n = a.size();
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(vis.find(i) == vis.end())
            {       
                ans++;
                queue<int> q;
                q.push(i);
                vis.insert(i);
                
                while(!q.empty()){
                    int v = q.front();
                    q.pop();
                    
                    for(int j=0;j<n;j++)
                        if(a[v][j] == 1 && vis.find(j) == vis.end()){
                            vis.insert(j);
                            q.push(j);
                        }
                }
            }
        }
        
        return ans;
    }
};
