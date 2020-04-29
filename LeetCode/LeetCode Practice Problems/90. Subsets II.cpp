class Solution {
public:
    set<vector<int>> s;
    void find(int i,vector<int> a,int n,vector<int> nums)
    {
        if(i == n)
        {
            return;
        }
        
        for(int j=i+1;j<n;j++)
        {
            a.push_back(nums[j]);
            s.insert(a);
            find(j,a,n,nums);
            a.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        find(-1,{},nums.size(),nums);
        vector<vector<int>> ans;
        ans.push_back({});
        for(auto i : s)
            ans.push_back(i);
        
        return ans;
    }
};
