class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int,int> m;
        int mx = 0;
        
        for(auto i :rectangles) {
            int mn = min(i[0] , i[1]);
            m[mn]++;
            mx = max(mx , mn);
        }
        
        return m[mx];
    }
};
