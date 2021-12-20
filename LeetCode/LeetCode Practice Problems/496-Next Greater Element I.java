class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        HashMap<Integer,Integer> map = new HashMap();
        Stack<Integer> st = new Stack();
        
        for(int i=nums2.length-1;i>=0;i--) {
            while(!st.empty() && nums2[st.peek()] <= nums2[i]) {
                st.pop();
            }
            map.put(nums2[i] , (st.empty()?-1:nums2[st.peek()]));
            st.push(i);
        }
        
        for(int i=0;i<nums1.length;i++) {
            nums1[i] = map.get(nums1[i]);
        }
        
        return nums1;
    }
}
