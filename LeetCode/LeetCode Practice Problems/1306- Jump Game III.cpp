class Solution {
public:
    bool vis[500090];
    bool canReach(vector<int>& a, int start) {
        int n = a.size();
       
        
        queue<int> q;
        q.push(start);
        vis[start] = true;
        
        while(!q.empty())
        {
            int v = q.front();
            q.pop();
            if(a[v] == 0) return true;
            
            int f = v + a[v] , r = v - a[v];
            if(f < n && vis[f] == false)
            {
                vis[f] = true;
                q.push(f);
            }
            
            if(r >= 0 && vis[r] == false)
            {
                vis[f] = true;
                q.push(r);
            }
        }
        
        return false;
    }
};
