class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        int n = A.size();
        int maxLeft[n] , minRight[n];
        
        int m = A[0];
        for(int i=0;i<n;i++)
        {
            m = max(m,A[i]);
            maxLeft[i] = m;
        }
        
        m = A[n-1];
        for(int i=n-1;i>=0;i--)
        {
            m = min(m,A[i]);
            minRight[i] = m;
        }
        
        for(int i=1;i<n;i++)
            if(maxLeft[i-1] <= minRight[i])
                return i;
        
        
        return -1;
    }
};
