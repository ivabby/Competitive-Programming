class Solution {
    public int[] findingUsersActiveMinutes(int[][] logs, int k) {
        HashMap<Integer,Set<Integer>> map = new HashMap();
        
        for(int log[]: logs) {
            Set<Integer> s = map.getOrDefault(log[0], new HashSet());
            s.add(log[1]);
            map.put(log[0] , s);
        }
        
        int ans[] = new int[k];
        
        for(int key: map.keySet()) {
            int value = map.get(key).size() - 1;
            if(value < k) {
                ans[value]++;
            }
        }
        
        return ans;
    }
}
