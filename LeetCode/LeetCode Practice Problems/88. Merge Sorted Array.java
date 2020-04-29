class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
        int i = m - 1;
        int j = n - 1;
        int k = n + m - 1;
        
        while(j >= 0)
        {
            if(i == -1)
            {
                nums1[k] = nums2[j];
                j--;
            }
            else{
                if(nums1[i] >= nums2[j])
                {
                    nums1[k] = nums1[i];
                    i--;
                }
                else{
                    nums1[k] = nums2[j];
                    j--;
                }
            }
            k--;
        }
    }
}
