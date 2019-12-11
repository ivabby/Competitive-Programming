class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i=0;i<nums.length;i++)
        {
            for(int j=i+1;j<nums.length;j++)
                if(nums[i] + nums[j] == target)
                {
                    int a[] = new int[2];
                    a[0] = i;
                    a[1] = j;
                    return a;
                }
        }
        int a[] = {};
        return a;
    }
}
