class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        if(k>arr.size())
            return 0;
        int s = 0;
        int ans = 0;
        for(int i=0;i<k-1;i++)
            s+=arr[i];
        
        int j = 0;
        for(int i=k-1;i<arr.size();i++)
        {
            s+=arr[i];
            int avg = s/k;
            if(avg>=threshold)
                ans++;
            s-=arr[j];
            j++;
        }
        
        return ans;
    }
};
