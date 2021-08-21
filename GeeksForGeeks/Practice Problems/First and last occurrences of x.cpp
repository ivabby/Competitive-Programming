vector<int> find(int arr[], int n , int x )
{
    int l = 0 , h = n-1;
    while(l < h) {
        int mid = (l+h)/2;
        if(arr[mid] < x) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    
    if(arr[l] == x) {
        int l2 = 0 , h2 = n-1;
        while(l2 < h2) {
            int mid = (l2 + h2)/2;
            if(arr[mid] <= x) {
                l2 = mid + 1;
            } else {
                h2 = mid;
            }
        }
        if(arr[l2] != x) l2--;
        return {l,l2};
    } else {
        return {-1,-1};
    }
}
