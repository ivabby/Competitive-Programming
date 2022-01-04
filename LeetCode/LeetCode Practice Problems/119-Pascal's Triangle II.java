class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> ans = new ArrayList();
        ans.add(1);
        for(int i=1;i<=rowIndex;i++) {
            List<Integer> cur = new ArrayList();
            
            for(int j=0;j<ans.size() + 1;j++) {
                if(j == 0 || j == ans.size()) {
                    cur.add(1);
                } else {
                    cur.add(ans.get(j) + ans.get(j-1));
                }
            }
            ans = cur;
        }
        return ans;
    }
}
