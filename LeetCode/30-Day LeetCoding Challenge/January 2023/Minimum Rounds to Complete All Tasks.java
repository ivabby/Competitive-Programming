class Solution {
    public int minimumRounds(int[] tasks) {
        Map<Integer,Integer> map = new HashMap();
        int ans = 0;
        for(int task: tasks) {
            map.put(task , map.getOrDefault(task , 0) + 1);
        }

        for(Integer key: map.keySet()) {
            int val = map.get(key);
            if(val == 1)
                return -1;
            ans += (val/3) + ((val%3 > 0)?1:0);
        }
        return ans;
    }
}
