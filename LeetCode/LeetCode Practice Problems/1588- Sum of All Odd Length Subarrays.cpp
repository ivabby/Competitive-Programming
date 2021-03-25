class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int s = 0 , n = arr.size();
        
        for(int i=0;i<n;i++) {
            int ss = 0;
            for(int j=i;j<n;j++) {
                ss += arr[j];
                if((j-i+1)%2 == 1) {
                    s += ss;
                }
            }
        }
        
        
        return s;
    }
};
