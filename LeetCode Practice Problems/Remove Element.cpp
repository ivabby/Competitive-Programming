class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != val)
            {
                k++;
                nums[k] = nums[i];
            }
        }
        return k+1;
    }
};
