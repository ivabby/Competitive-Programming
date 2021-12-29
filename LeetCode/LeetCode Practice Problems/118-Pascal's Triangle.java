class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList();
        int numCols = 1;
        for(int row=0;row<numRows;row++) {
            List<Integer> cur = new ArrayList();
            for(int col=0;col<numCols;col++) {
                if(col == 0 || col == numCols-1) {
                    cur.add(1);
                    continue;
                }
                int sum = ans.get(row-1).get(col) + ans.get(row-1).get(col-1);
                cur.add(sum);
            }
            numCols++;
            ans.add(cur);
        }
        return ans;
    }
}
