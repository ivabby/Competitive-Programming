void rotate(int arr[], int n)
{
    int prev = arr[0];
    for(int i=1;i<n;i++) {
        int cur = arr[i];
        arr[i] = prev;
        prev = cur;
    }
    
    arr[0] = prev;
}
