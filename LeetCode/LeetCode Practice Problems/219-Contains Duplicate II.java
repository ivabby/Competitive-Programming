class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer , Integer> map = new HashMap();
        for(int i=0;i<nums.length;i++) {
            int val = nums[i];
            if(map.containsKey(val)) {
                int prevIdx = map.get(val);
                int diff = i - prevIdx;
                if(diff <= k) {
                    return true;
                }
            }
            map.put(val , i);
        }
        return false;
    }
}
