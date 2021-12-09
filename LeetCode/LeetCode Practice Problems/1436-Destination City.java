class Solution {
    public String destCity(List<List<String>> paths) {
        HashSet<String> src = new HashSet();
        HashSet<String> set = new HashSet();
        
        for(List<String> path: paths) {
            src.add(path.get(0));
            set.add(path.get(1));
        }
        
        String ans = "";
        
        for(String key: set) {
            if(!src.contains(key)) {
                ans = key;
                break;
            }
        }
        
        return ans;
    }
}
