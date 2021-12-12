class Solution {
    public int countPoints(String rings) {
        HashMap<Integer,Set<Character>> map = new HashMap();
        int ans = 0;
        
        for(int i=0;i<rings.length();i+=2) {
            char ch = rings.charAt(i);
            int pos = rings.charAt(i+1) - '0';
            
            if(!map.containsKey(pos)) {
                map.put(pos , new HashSet());
            }
            
            map.get(pos).add(ch);
        }
        
        for(Integer key: map.keySet()) {
            if(map.get(key).size() == 3) ans++;
        }
        
        return ans;
    }
}
