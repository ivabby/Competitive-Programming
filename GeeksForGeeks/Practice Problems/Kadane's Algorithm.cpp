class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int s = 0;
        int ans = arr[0];
        for(int i=0;i<n;i++) {
            s += arr[i];
            if(s < arr[i]) s = arr[i];
            ans = max(ans , s);
        }
        
        return ans;
        
    }
};
