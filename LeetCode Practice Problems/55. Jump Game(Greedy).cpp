class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(i <= last)
            {
                last = max(last , i+nums[i]);
            }
        }
        
        return last>=(n-1);
    }
};
