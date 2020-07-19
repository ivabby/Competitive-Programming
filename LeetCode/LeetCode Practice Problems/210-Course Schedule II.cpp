class Solution {
public:
    map<int,vector<int>> m;
    set<int> s , vis;
    vector<int> ans;
    bool ok = true;
    
    void dfs(int u)
    {
        vis.insert(u);
        s.insert(u);
        for(auto i : m[u])
        {
            if(vis.find(i) != vis.end())
            {
                ok = false;
                return;
            }
            if(s.find(i) == s.end())
            {
                dfs(i);
            }
        }
        vis.erase(u);
        ans.push_back(u);
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        for(auto i : prerequisites){
            m[i[0]].push_back(i[1]);
        }
        
        
        for(int i=0;i<numCourses;i++)
            if(s.find(i) == s.end())
                dfs(i);
        
        if(!ok) ans.clear();
        return ans;
    }
};
