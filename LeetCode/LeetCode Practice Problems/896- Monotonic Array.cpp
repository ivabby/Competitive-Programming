class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i = 1 , n = A.size();
        
        while(i<n && A[i]>=A[i-1])
            i++;
        
        if(i == n) return true;
        
        i = 1;
        while(i<n && A[i]<=A[i-1]) 
            i++;
        
        return i==n;
    }
};
