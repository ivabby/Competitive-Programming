class Solution {
public:
    bool isBoomerang(vector<vector<int>>& a) {
        int x1 = a[0][0] , y1 = a[0][1];
        int x2 = a[1][0] , y2 = a[1][1];
        int x3 = a[2][0] , y3 = a[2][1];
        
        if((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x1 == x3 && y1 == y3))
            return false;
        
        if((x1 == x2 && x1 == x3) || (y1 == y2 && y1 == y3))
            return false;
        
        if(x1 == y1 && x2 == y2 && x3 == y3)
            return false;
        
        
        return true;
    }
};
