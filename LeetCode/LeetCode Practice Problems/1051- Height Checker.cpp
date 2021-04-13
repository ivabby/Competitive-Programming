class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a = heights;
        sort(a.begin() , a.end());
        
        int ans = 0;
        int n = a.size();
        
        for(int i=0;i<n;i++)
            if(a[i] != heights[i])
                ans++;
        
        return ans;
    }
};
