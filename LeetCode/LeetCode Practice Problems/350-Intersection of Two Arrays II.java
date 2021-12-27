class Solution {
    
    public int[] countFreq(int[] nums) {
        int cnt[] = new int[1100];
        for(int num: nums) {
            cnt[num]++;
        }
        return cnt;
    }
    
    public int[] intersect(int[] nums1, int[] nums2) {
        int cnt1[] = countFreq(nums1);
        int cnt2[] = countFreq(nums2);
        
        List<Integer> ans = new ArrayList();
        for(int i=0;i<=1000;i++) {
            int mn = Math.min(cnt1[i] , cnt2[i]);
            while(mn > 0) {
                mn--;
                ans.add(i);
            }
        }
        
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}
