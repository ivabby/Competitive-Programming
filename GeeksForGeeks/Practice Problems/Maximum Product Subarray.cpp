#define ll long long
class Solution{
public:
	long long maxProduct(int *arr, int n) {
	    long long ans = 0;
	    long long mx , mn;
	    mx = mn = 1;
	    
	    for(int i=0;i<n;i++) {
	        if(arr[i] < 0) {
	            swap(mx , mn);
	        }
	        
	        mx = max(arr[i] * 1ll , mx * arr[i]);
	        mn = min(arr[i] * 1ll, mn * arr[i]);
	        
	        ans = max(ans , mx);
	    }
	    return ans;
	}
};
