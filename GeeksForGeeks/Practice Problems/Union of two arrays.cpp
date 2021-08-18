class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        int c[n+m];
        int k = 0;
        
        for(int i=0;i<n;i++,k++) c[k] = a[i];
        for(int i=0;i<m;i++,k++) c[k] = b[i];
        // for(int i=0;i<k;i++) cout<<
        sort(c,c+k);
        int ans = 1;
        for(int i=0;i<k-1;i++) {
            if(c[i] != c[i+1]) ans++;
        }
        
        return ans;
        
    }
};
