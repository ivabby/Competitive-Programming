class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        
        for(auto i: queries) {
            int x = i[0];
            int y = i[1];
            int r = i[2];
            
            int cnt = 0;
            for(auto j: points) {
                int xx = j[0];
                int yy = j[1];
                
                double dis = sqrt((xx-x)*(xx-x) + (yy-y)*(yy-y));
                if(dis <= (double) r) {
                    cnt++;
                }
            }
            
            ans.push_back(cnt);
        }
        
        return ans;
        
    }
};
