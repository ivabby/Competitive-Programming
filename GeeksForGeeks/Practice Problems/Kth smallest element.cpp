class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;
        for(int i=l;i<=r;i++) {
            pq.push(arr[i]);
            if(pq.size() > k) {
                pq.pop();
            }
        }
        
        return pq.top();
    }
};
