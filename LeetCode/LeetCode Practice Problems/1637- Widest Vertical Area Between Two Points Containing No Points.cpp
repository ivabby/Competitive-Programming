class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> a;
        for(auto i : points) a.push_back(i[0]);
        
        sort(a.begin() , a.end());
        int mx = 0;
        for(int i=1;i<a.size();i++) {
            mx = max(mx , a[i] - a[i-1]);
        }
        
        return mx;
    }
};
