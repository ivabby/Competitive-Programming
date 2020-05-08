class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
        int ans = 0;
        int index = -1 , prev = 0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i] > R)
            {
                prev = 0;
                index = i;
            }
            else if(A[i] < L)
                ans += prev;
            else{
                ans += i - index;
                prev = i - index;
            }
        }
        
        
        return ans;
    }
};
