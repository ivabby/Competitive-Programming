class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr , arr+n);
        
        int mx = arr[n-1];
        int mn = arr[0];
        
        int ans = mx - mn;
        
        for(int i=1;i<n;i++) {
            if(arr[i] >= k && arr[n-1] >= k) {
                
                mx = max(arr[i-1] + k , arr[n-1] - k);
                mn = min(arr[0] + k , arr[i] - k);
                
                ans = min(ans , mx - mn);
            }
        }
        
        return ans;
    }
};
