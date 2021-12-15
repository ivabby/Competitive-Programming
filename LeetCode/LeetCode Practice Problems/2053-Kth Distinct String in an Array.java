class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String,Integer> map = new HashMap();
        
        for(String st: arr) {
            map.put(st , map.getOrDefault(st , 0) + 1);
        }
        
        String ans = "";
        for(String st: arr) {
            if(map.get(st) == 1) {
                k--;
            }
            if(k == 0) {
                ans = st;
                break;
            }
        }
        
        return ans;
    }
}
