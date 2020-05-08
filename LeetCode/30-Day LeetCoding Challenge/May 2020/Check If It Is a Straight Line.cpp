class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        sort(a.begin() , a.end());
        int n = a.size();
        double m = (double)(a[n-1][1] - a[0][1]) / (double)(a[n-1][0] - a[0][0]);
             
        for(int i=1;i<n-1;i++)
        {
            double y1 = m * (double)a[i][0] - m * a[0][0] + a[0][1];
            if(y1 != (double)a[i][1])
                return false;
        }
             
             
        return true;
             
    }
};
