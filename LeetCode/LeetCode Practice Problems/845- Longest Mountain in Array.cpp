class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        int i = 0;
        
        while(i < n) {
            int j = i;
            int up = 0 , down = 0;
            
            while(j+1<n && arr[j] < arr[j+1]) {
                j++;
                up++;
            }
            
            while(j+1<n && arr[j] > arr[j+1]) {
                j++;
                down++;
            }
            
            
            if(j-i+1 >= 3 && up > 0 && down > 0) {
                ans = max(ans , j-i+1);
            }
            if(i == j) {
                i++;
            } else {
                i = j;
            }
        }
        
        
        
        return ans;
    }
};
