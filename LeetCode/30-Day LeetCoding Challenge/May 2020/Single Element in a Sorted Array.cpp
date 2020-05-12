class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int l = 0 , h = a.size() - 1;
        
        while(l < h)
        {
            int mid = (l+h)/2;
            if((mid%2 == 0 && a[mid] == a[mid+1]) || (mid%2 == 1 && a[mid] == a[mid-1]))
                l = mid + 1;
            else
                h = mid;
        }
        
        return a[l];
    }
};
