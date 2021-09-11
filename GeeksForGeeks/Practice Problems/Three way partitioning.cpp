class Solution{   
public:
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int n = arr.size();
        int k = 0;
        for(int i=0;i<n;i++) {
            if(arr[i] < a) {
                swap(arr[i] , arr[k]);
                k++;
            }
        }
        
        int j = k;
        for(int i=k;i<n;i++) {
            if(arr[i] <= b) {
                swap(arr[i] , arr[j]);
                j++;
            }
        }
    }
};
