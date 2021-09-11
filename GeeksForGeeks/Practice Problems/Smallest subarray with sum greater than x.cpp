class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int ans = n;
        int j = -1;
        int s = 0;
        
        for(int i=0;i<n;i++) {
            while(j+1<n && s<=x) {
                j++;
                s+=arr[j];
            }
            
            if(s > x) {
                ans = min(ans , j-i+1);
            }
            s -= arr[i];
        }
        
        return ans;
    }
};
