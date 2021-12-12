class Solution {
    
    public boolean find(int n) {
        for(char c: String.valueOf(n).toCharArray()) {
            if(c == '0' || (n%(c-'0') > 0)) {
                return false;
            }
        }
        return true;
    }
    
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> ans = new ArrayList();
        for(int i=left;i<=right;i++) {
            if(find(i)) {
                ans.add(i);
            }
        }
        
        return ans;
    }
}
