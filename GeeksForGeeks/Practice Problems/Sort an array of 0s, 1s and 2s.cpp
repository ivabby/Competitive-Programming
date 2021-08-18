class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int l = 0 , h = n-1;
        int mid = 0;
        
        while(mid <= h) {
            switch(a[mid]) {
                case 0:
                    swap(a[l++] , a[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid] , a[h--]);
            }
        }
    }
    
};
