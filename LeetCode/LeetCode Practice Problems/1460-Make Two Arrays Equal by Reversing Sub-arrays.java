class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        Arrays.sort(arr);
        Arrays.sort(target);
        
        for(int i=0;i<arr.length;i++) {
            if(arr[i] != target[i]) {
                return false;
            }
        }
        
        return true;
    }
}
