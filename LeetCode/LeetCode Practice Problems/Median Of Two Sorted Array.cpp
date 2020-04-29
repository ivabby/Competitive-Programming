class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        bool even = false;
        int sz = nums1.size() + nums2.size();
        if(sz%2 == 0) even = true;
        int i = 0 , j = 0 , n1 = nums1.size() , n2 = nums2.size();
        if(n1 == 0 && n2 == 1) return nums2[0];
        if(n2 == 0 && n1 == 1) return nums1[0];
        int tot = 0;
        cout<<sz<<"\n";
        while(i<n1 || j<n2)
        {
            int value = 0;
            if(j == n2)
            {
                value = nums1[i];
                i++;
            }
            else if(i == n1)
            {
                value = nums2[j];
                j++;
            }
            else if(nums1[i] <= nums2[j])
            {
                value = nums1[i];
                i++;
            }
            else
            {
                value = nums2[j];
                j++;
            }
            tot++;
            if(tot == sz/2)
            {
                // if(sz%2 == 1) return (double) value;
                // else
                // {
                    int c;
                    if(j == n2) c = nums1[i];
                    else if(i == n1) c = nums2[j];
                    else if(nums1[i] <= nums2[j]) c = nums1[i];
                    else c = nums2[j];
                    cout<<c<<" "<<value;
                    if(sz%2 == 1) return c;
                    return (double)(c + value)/(double) 2;
                
            }
        }
        return 0;
    }
};   

