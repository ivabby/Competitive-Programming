class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n, 0);
        
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()) {
            int r = q.front();
            q.pop();
            
            for(auto i: rooms[r]) {
                if(vis[i] == 0) {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
        
        for(auto i: vis) {
            if(i == 0) {
                return false;
            }
        }
        
        return true;
    }
};
