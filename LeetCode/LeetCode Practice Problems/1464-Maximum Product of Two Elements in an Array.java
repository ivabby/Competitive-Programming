class Solution {
    public int maxProduct(int[] nums) {
        int mx1 = 0 , mx2 = 0;
        
        for(int num: nums) {
            if(num > mx1) {
                mx2 = mx1;
                mx1 = num;
            }
            else if(num > mx2) {
                mx2 = num;
            }
        }
        
        return (mx1 - 1)*(mx2 - 1);
    }
}
