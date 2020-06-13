class Solution {
    public static List<Integer> largestDivisibleSubset(int[] nums) {
        List<Integer> result = new ArrayList<Integer>();
        if (nums.length == 0) return result;

        Arrays.sort(nums); // step 1
        int[] count = new int[nums.length];
        Arrays.fill(count, 1); 
        
        for (int i = 1; i < nums.length; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (nums[i] % nums[j] == 0) {
                    count[i] = Math.max(count[i], count[j] + 1); 
                }
            }
        }

        
        int maxIndex = 0;
        for (int i = 1; i < nums.length; i++) {
            maxIndex = count[i] > count[maxIndex] ? i : maxIndex;
        }

        int temp = nums[maxIndex];
        int currentCount = count[maxIndex];
        for (int i = maxIndex; i >= 0; i--) {
            if (temp % nums[i] == 0 && count[i] == currentCount) {
                result.add(nums[i]);
                temp = nums[i];
                currentCount--;
            }
        }
        return result;
    }
}
