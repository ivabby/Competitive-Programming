class Solution {
public:
    bool check(int i,bool vis[],bool *restack,vector<int> a[])
    {
        if(restack[i])
            return true;
        if(vis[i])
            return false;
        
        vis[i] = true;
        restack[i] = true;
        for(auto j : a[i])
        {
            if(!vis[j] && check(j,vis,restack,a))
                return true;
            else if(restack[j])
                return true;
        }
        
        restack[i] = false;
        return false;
    }
    
    //  Check for cycle if cycle exists then we cannot complete the course on time
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> a[n];
        
        for(auto i : prerequisites)
        {
            a[i[0]].push_back(i[1]);
        }
        
        bool vis[n] = {0};
        bool restack[n] = {0};
        
        for(int i=0;i<n;i++)
                if(check(i,vis,restack,a))
                    return false;
        
        return true;
    }
};
