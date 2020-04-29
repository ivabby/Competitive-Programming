#define ll long long
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        
        int n = nums.size();
        int size = 1<<n;
        for(int i=0;i<size;i++)
        {
            vector<int> a;
            for(int j=0;j<n;j++)
            {
                if((1 << j)&i)
                    a.push_back(nums[j]);
            }
            ans.push_back(a);
        }
        
        return ans;
    }
};
