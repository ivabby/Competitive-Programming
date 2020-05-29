class Solution {
public:
    vector<int> adj[100009];
    bool vis[100009] , cur[100009];
    
    bool cycle(int u)
    {
        if(cur[u] == true)
            return true;
        if(vis[u] == true)
            return false;
        
        vis[u] = true;
        cur[u] = true;
        for(auto i : adj[u])
        {
            if(cycle(i))
                return true;
        }
        
        cur[u] = false;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        for(auto i : prerequisites)
            adj[i[0]].push_back(i[1]);
        
        memset(vis , false , sizeof vis);
        for(int i=0;i<numCourses;i++)
            if(!vis[i] && cycle(i))
                return false;
        
        return true;
    }
};
