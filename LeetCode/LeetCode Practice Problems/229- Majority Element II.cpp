class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int nums1 = 0 , nums2 = 1 ,cnt1 = 0 , cnt2 = 0;
        
        for(auto i: nums) {
            if(i == nums1) {
                cnt1++;
            }
            else if(i == nums2) {
                cnt2++;
            }
            else if(cnt1 == 0) {
                nums1 = i;
                cnt1 = 1;
            }
            else if(cnt2 == 0) {
                nums2 = i;
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = 0;
        cnt2 = 0;
        
        for(auto i:nums) {
            if(i == nums1) cnt1++;
            if(i == nums2) cnt2++;
        }
        
        vector<int> a;
        if(cnt1 > nums.size()/3) a.push_back(nums1);
        if(cnt2 > nums.size()/3) a.push_back(nums2);
        
        return a;
        
    }
};
