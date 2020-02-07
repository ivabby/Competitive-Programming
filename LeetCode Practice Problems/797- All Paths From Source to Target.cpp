class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>> a,vector<int> p,int u)
    {
        if(u == a.size()-1)
        {
            ans.push_back(p);
            return;
        }
        
        for(auto i : a[u])
        {
            p.push_back(i);
            dfs(a,p,i);
            p.pop_back();
        }
    }
                          
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph,{0},0);
        return ans;
    }
};
