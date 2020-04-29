class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int m = A[0];
        int p = 0;
        for(int i=1;i<A.size();i++)
            if(A[i] > m)
            {
                p = i;
                m = A[i];
            }
        
        return p;
    }
};
