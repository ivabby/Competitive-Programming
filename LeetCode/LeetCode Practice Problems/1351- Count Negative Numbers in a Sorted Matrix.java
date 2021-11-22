//  Binary Search Solution | Time Complexity - O(n*logm) | Space Complexity - O(1)
class Solution {
    
    public int binarySearch(int[][] a,int i) {
        int l = 0 , h = a[0].length - 1;
        int pos = a[0].length + 1;
        
        while(l <= h) {
            int mid = h - (h - l)/2;
            
            if(a[i][mid] < 0) {
                pos = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        if(pos > a[0].length) return 0;
        
        return a[0].length - pos;
    }
    
    public int countNegatives(int[][] grid) {
        int n = grid.length;
        
        //  No element in grid
        if(n == 0) return 0;
        
        int m = grid[0].length;
        int ans = 0;
        
        for(int i=0;i<n;i++) {
            ans += binarySearch(grid,i);
        }
        
        return ans;
    }
}
