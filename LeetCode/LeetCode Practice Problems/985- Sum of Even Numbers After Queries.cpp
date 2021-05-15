class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int s = 0;
        for(auto i: nums) {
            if(i%2 == 0)
                s+=i;
        }
        
        vector<int> ans;
        
        for(auto i: queries) {
            int index = i[1];
            int val = i[0];
            
            if(nums[index]%2 == 0) {
                s -= nums[index];
            }
            
            nums[index] += val;
            if(nums[index]%2 == 0) {
                s += nums[index];
            }
            
            ans.push_back(s);
        }
        
        
        return ans;
    }
};
