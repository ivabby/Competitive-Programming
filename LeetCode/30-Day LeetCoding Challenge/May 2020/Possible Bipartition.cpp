class Solution {
public:
    map<int,vector<int>> m;
    map<int,int> color;
    
    bool dfs(int u,int c)
    {
        if(color.find(u) != color.end())
            return color[u] == c;
        color[u] = c;
        
        for(auto v : m[u])
        {
            if(!dfs(v , c^1))
                return false;
        }
        return true;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& a) {
        for(auto i : a)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        
        for(int i=1;i<=N;i++)
            if(color.find(i) == color.end() && !dfs(i , 0))
                return false;
        
        
        return true;
    }
};
