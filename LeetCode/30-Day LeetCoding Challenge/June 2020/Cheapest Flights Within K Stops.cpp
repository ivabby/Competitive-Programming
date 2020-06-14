#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
class Solution {
public:
    vector<pair<int,int>> adj[110];
    int ans = INT_MAX;
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        for(auto i : flights)
        {
            adj[i[0]].pb(mp(i[1] , i[2]));
        }
        
        queue<pair<int,int>> q;
        q.push(mp(src , 0));
        k++;
        while(!q.empty())
        {
            queue<pair<int,int>> t;
            while(!q.empty())
            {
                pair<int,int> p = q.front();
                q.pop();
                
                if(p.first == dst)
                {
                    ans = min(ans , p.second);
                }
                
                for(auto i : adj[p.first])
                {
                    if(p.second + i.second > ans)
                        continue;
                    t.push(mp(i.first , p.second + i.second));
                }
            }
            q = t;
            k--;
            if(k < 0) break;
        }
        
        if(ans == INT_MAX) ans = -1;
        return ans;
    }
};
