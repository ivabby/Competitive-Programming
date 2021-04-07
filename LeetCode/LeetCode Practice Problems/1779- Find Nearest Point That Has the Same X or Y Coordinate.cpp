class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dis = INT_MAX;
        int pos = -1;
        int j = 0;
        for(auto i:points) {
            if(x==i[0] || y==i[1]) {
                int d = abs(x-i[0]) + abs(y-i[1]);
                if(d < dis) {
                    dis = d;
                    pos = j;
                }
            }
            j++;
        }
        
        return pos;
    }
};
