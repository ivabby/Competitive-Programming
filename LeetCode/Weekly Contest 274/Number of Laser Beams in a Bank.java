class Solution {
    public int numberOfBeams(String[] bank) {
        List<Integer> lasers = new ArrayList();
        for(String str: bank) {
            int cnt = 0;
            for(char c: str.toCharArray()) {
                cnt += (c == '1')?1:0;
            }
            if(cnt != 0) 
                lasers.add(cnt);
        }
        int ans = 0;
        for(int i=0;i<lasers.size() - 1;i++) {
            ans += lasers.get(i) * lasers.get(i+1);
        }
        return ans;
    }
}
