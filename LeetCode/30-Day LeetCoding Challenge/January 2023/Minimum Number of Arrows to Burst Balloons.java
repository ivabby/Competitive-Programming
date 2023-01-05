class Solution {
    public int findMinArrowShots(int[][] points) {
        Arrays.sort(points , (a,b) -> {
            if(a[1] > b[1])
                return 1;
            return -1;
        });

        int end = points[0][1] , ans = 1;
        for(int[] point: points) {
            System.out.println(point[0]+" "+point[1]);
            if(point[0] > end) {
                end = point[1];
                ans++;
            }
        }

        return ans;
    }
}
