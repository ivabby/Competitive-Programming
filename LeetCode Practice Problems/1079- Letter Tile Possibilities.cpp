class Solution {
public:
    int ans = -1;
    void dfs(string s,bool vis[])
    {
        ans+=1;
        for(int i=0;i<s.length();i++)
        {
            if(vis[i])
                continue;
            if(i>0 && s[i] == s[i-1] && !vis[i-1])
                continue;
            
            vis[i] = true;
            dfs(s,vis);
            vis[i] = false;
        }
    }
    int numTilePossibilities(string tiles) {
        if(tiles.length() == 0)
            return 0;
        sort(tiles.begin() , tiles.end());
        bool vis[tiles.length()];
        cout<<tiles;
        dfs(tiles,vis);
        return ans;
    }
};
