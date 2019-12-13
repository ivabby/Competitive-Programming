class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            int value = abs(nums[i]) - 1;
            if(nums[value] < 0) a.push_back(abs(nums[i]));
            nums[value] = -nums[value];
        }
        return a;
    }
};
