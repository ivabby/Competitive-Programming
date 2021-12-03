class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int n = plants.length;
        int ans = 0;
        int cur = capacity;
        
        for(int i=0;i<n;i++) {
            ans++;
            cur -= plants[i];
            
            if(i+1 < n && plants[i+1] > cur) {
                cur = capacity;
                ans += 2*(i+1);
            }
        }
        return ans;
    }
}
