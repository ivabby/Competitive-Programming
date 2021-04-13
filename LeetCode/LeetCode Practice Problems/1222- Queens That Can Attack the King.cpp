class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        bool valid[8][8] = {};
        
        for(auto i: queens) valid[i[0]][i[1]] = true;
        
        vector<vector<int>> ans;
        for(int i=-1;i<=1;i++) {
            for(int j=-1;j<=1;j++) {
                if(i == 0 && j == 0) continue;
                int x = king[0] + i;
                int y = king[1] + j;
                
                while(min(x,y)>=0 && max(x,y)<8) {
                    if(valid[x][y]) {
                        ans.push_back({x,y});
                        break;
                    }
                    x+=i;
                    y+=j;
                }
            }
        }
        
        
        return ans;
    }
};
