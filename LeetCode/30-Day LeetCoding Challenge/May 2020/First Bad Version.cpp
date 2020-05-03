class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1 , h = n;
        while(l < h)
        {
            int mid = l + (h - l)/2;
            if(isBadVersion(mid))
                h = mid;
            else
                l = mid + 1;
        }
        
        return l;
    }
};
