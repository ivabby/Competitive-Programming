class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i = 0;
        vector<vector<int>> ans;
                    
        bool found = false;
        
        while(i < n) {
            int start = i;
            int end = i;
            int mn = -1 , mx = -1;
            

            
            if(intervals[i][1] >= newInterval[0] && !found) {
                found = true;
                
                if(intervals[i][0] > newInterval[0] && intervals[i][0] > newInterval[1]) {
                    ans.push_back(newInterval);
                } else {
                    mn = min(intervals[i][0] , newInterval[0]);
                    while(end+1 < n && intervals[end+1][0] <= newInterval[1]) {
                        end++;
                    }

                    mx = max(intervals[end][1] , newInterval[1]);
                    ans.push_back({mn,mx});
                    i = end;
                }
                
            }
            
            if(mn == -1 && mx == -1)
                ans.push_back(intervals[i]);
            
            i++;
        }
        
        if(!found)
            ans.push_back(newInterval);
        
        return ans;
        
    }
};
