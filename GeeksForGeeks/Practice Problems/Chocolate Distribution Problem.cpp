class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        sort(a.begin() , a.end());
        
        int i = 0;
        long long ans = a[n-1] - a[0];
        for(long long j=m-1;j<n;j++,i++) {
            ans = min(ans , a[j] - a[i]);
        }
        
        return ans;
    }   
};
