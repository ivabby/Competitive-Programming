class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int l = 0 , h = a.size() - 1;
        
        while(l < h) {
            int mid = (l+h)/2;
            if(a[mid] < a[mid + 1]) l = mid + 1;
            else h = mid;
        }
        
        return l;
    }
};
