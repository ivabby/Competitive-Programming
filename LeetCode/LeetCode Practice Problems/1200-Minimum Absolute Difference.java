class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        int minElement = arr[0];
        int maxElement = arr[0];
        
        for(int num: arr) {
            minElement = Math.min(minElement , num);
            maxElement = Math.max(maxElement , num);
        }
        
        int shift = -minElement;
        int cnt[] = new int[maxElement - minElement + 1];
        
        for(int num: arr) {
            cnt[num + shift] = 1;
        }
        
        int minPairDiff = maxElement - minElement;
        int prev = 0;
        List<List<Integer>> ans = new ArrayList();
        
        for(int cur=1;cur<=maxElement+shift;cur++) {
            if(cnt[cur] == 0) continue;
            
            if(cur - prev < minPairDiff) {
                minPairDiff = cur - prev;
                ans.clear();
            }
            if(cur - prev == minPairDiff) {
                ans.add(Arrays.asList(prev - shift , cur - shift));
            }
            prev = cur;
        }
        
        return ans;
    }
}
