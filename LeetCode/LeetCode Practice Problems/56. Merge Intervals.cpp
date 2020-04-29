class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size() == 0)
            return ans;
        
        sort(intervals.begin() , intervals.end());
        int n = intervals.size();
        int val = 0;
        for(int i=0;i<n;i++)
            val = max(val , intervals[i][1]);
        
        val = val + 10;
        intervals.push_back({val , val});
        
        int mini = intervals[0][0] , maxi = intervals[0][1];
        for(int i=1;i<=n;i++)
        {
            int a = intervals[i][0] , b = intervals[i][1];
            if(a<=maxi)
            {
                mini = min(a,mini);
                maxi = max(b,maxi);
            }
            else
            { 
                ans.push_back({mini , maxi});
                mini = a;
                maxi = b;
            }
        }
        
        return ans;
    }
};
