class Solution {
    
    public TreeNode arrayToBST(int[] nums,int l,int h) {
        if(l > h) return null;
        int mid = h - (h - l)/2;
        TreeNode root = new TreeNode(nums[mid]);
        root.left = arrayToBST(nums,l,mid-1);
        root.right = arrayToBST(nums,mid+1,h);
        return root;
    }
    
    public TreeNode sortedArrayToBST(int[] nums) {
        return arrayToBST(nums,0,nums.length - 1);
    }
}
