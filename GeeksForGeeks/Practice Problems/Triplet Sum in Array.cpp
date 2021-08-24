class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n-2;i++) {
            for(int j=i+1;j<n-1;j++) {
                int val = X - (A[i] + A[j]);
                
                int low = j+1;
                int high = n-1;
                while(low <= high) {
                    int mid = (low + high)/2;
                    if(A[mid] == val) {
                        return true;
                    }
                    else if(A[mid] < val) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
            }
        }   
        return false;
    }
};
