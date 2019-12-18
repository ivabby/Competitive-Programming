class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        while(i>0)
        {
            if(nums[i] > nums[i-1])
                break;
            i--;
        }
        if(i == 0)
            sort(nums.begin(),nums.end());
        else
            next_permutation(nums.begin(),nums.end());
    }
};
