class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
        vector<int> cnt(100001,0);
        for(int i=0;i<N;i++) {
            cnt[arr[i]]++;
        }
        
        int ans = 0 , cur = 0;
        for(int i=0;i<100001;i++) {
            if(cnt[i] > 0) {
                cur++;
            } else {
                cur = 0;
            }
            ans = max(ans , cur);
        }
        
        return ans;
    }
};
