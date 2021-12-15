class Solution {
    public List<Integer> twoOutOfThree(int[] nums1, int[] nums2, int[] nums3) {
        List<Integer> ans = new ArrayList();
        
        int cnt1[] = new int[101];
        int cnt2[] = new int[101];
        int cnt3[] = new int[101];
        
        for(int num: nums1) cnt1[num]++;
        for(int num: nums2) cnt2[num]++;
        for(int num: nums3) cnt3[num]++;
        
        for(int i=1;i<=100;i++) {
            int cnt = ((cnt1[i] > 0)?1:0) + ((cnt2[i] > 0)?1:0) + ((cnt3[i] > 0)?1:0);
            if(cnt >= 2) {
                ans.add(i);
            }
        }
        
        return ans;
    }
}
