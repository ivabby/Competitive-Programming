class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin() , arr.end());
        int n = arr.size();
        
        int mini = INT_MAX;
        
        for(int i=0;i<n-1;i++)
        {
            int v = arr[i+1] - arr[i];
            if(mini > v)
            {
                ans.clear();
                mini = v;
            }
            if(mini == v)
            {
                ans.push_back({arr[i] , arr[i+1]});
            }
        }
        
        
        return ans;
    }
};
