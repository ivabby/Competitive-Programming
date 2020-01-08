class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();)
        {
            int k = i , c = 1;
            
            while(k+1<n && nums[k+1] == nums[i])
                k+=1 , c+=1;
            
            nums[j] = nums[i];
            j++;
            if(c>1)
            {
                nums[j] = nums[i];
                j++;
            }
            i = k + 1;
        }
        
        return j;
    }
};
