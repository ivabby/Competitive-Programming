class Solution {
    public int[] replaceElements(int[] arr) {
        int mx = -1;
        for(int i=arr.length-1;i>=0;i--) {
            int val = arr[i];
            arr[i] = mx;
            mx = Math.max(mx , val);
        }
        
        return arr;
    }
}
