#define mp(x,y) make_pair(x,y)
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int newColor) {
        int n = a.size() , m = a[0].size();
        int color = a[sr][sc];
        
        queue<pair<int,int>> q;
        set<pair<int,int>> s;
        q.push(mp(sr,sc));
     
        while(!q.empty())
        {
            pair<int,int> p = q.front();
            q.pop();
            int r = p.first , c = p.second;
            a[r][c] = newColor;
            
            if(r != 0 && a[r-1][c] == color && s.find(mp(r-1 , c)) == s.end())
            {
                q.push(mp(r-1 , c));
                s.insert(mp(r-1,  c));
            }
                
            if(c != 0 && a[r][c-1] == color && s.find(mp(r,c-1)) == s.end())
            {
                q.push(mp(r , c-1));
                s.insert(mp(r , c-1));
            }   
            if(r+1 != n && a[r+1][c] == color && s.find(mp(r+1 , c)) == s.end())
            {
                q.push(mp(r+1 , c));
                s.insert(mp(r+1 , c));
            }  
            if(c+1 != m && a[r][c+1] == color && s.find(mp(r,c+1)) == s.end())
            {
                q.push(mp(r , c+1));
                s.insert(mp(r , c+1));
            }
                
        }
        
        
        return a;
    }
};
