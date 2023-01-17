class Solution {

    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> list = new ArrayList();
        int i = 0;
        while(i<intervals.length && intervals[i][1] < newInterval[0]) {
            list.add(intervals[i]);
            i++;
        }
        
        while(i<intervals.length && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = Math.min(newInterval[0],intervals[i][0]);
            newInterval[1] = Math.max(newInterval[1],intervals[i][1]);
            i++;
        }

        list.add(newInterval);
        while(i<intervals.length){
            list.add(intervals[i]);
            i++;
        }
        int ans[][] = new int[list.size()][2];
        for( i=0;i<list.size();i++) {
            ans[i] = list.get(i);
        }
        return ans;
    }
}
