class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0 , n = nums.size();
        
        for(int i=0;i<n;i++)
            zero += (nums[i] == 0)?1:0;
        
        int k = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != 0)
                nums[k++] = nums[i];
        }
        
        while(k<n)
            nums[k++] = 0;
    }
};
