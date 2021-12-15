class Solution {
    
    public HashMap<String,Integer> solve(String[] words) {
        HashMap<String,Integer> map = new HashMap();
        for(String word: words) {
            map.put(word , map.getOrDefault(word , 0)+1);
        }
        
        return map;
    }
    
    public int countWords(String[] words1, String[] words2) {
        HashMap<String,Integer> map1 = solve(words1);
        HashMap<String,Integer> map2 = solve(words2);
        
        int ans = 0;
        for(String key: map1.keySet()) {
            if(map1.get(key) == 1 && map2.containsKey(key) && map2.get(key) == 1) {
                ans++;
            }
        }
        
        return ans;
    }
}
