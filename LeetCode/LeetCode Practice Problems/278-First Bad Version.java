public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int ans = -1;
        int start = 1 , end = n;
        while(start <= end) {
            int mid = end - (end - start)/2;
            if(isBadVersion(mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
}
