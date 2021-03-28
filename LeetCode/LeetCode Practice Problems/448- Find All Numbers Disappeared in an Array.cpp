class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        for(auto i: nums) {
            int v = abs(i) - 1;
            if(nums[v] > 0) {
                nums[v] = -nums[v];
            }
        }
        
        int pos = 1;
        for(auto i : nums) {
            if(i>0) {
                ans.push_back(pos);
            }
            
            pos++;
        }
        
        return ans;
        
        
    }
};
