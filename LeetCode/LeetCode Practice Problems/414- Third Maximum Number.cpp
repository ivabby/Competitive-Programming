class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long largest = (long)INT_MIN - 1;
        
        for(auto i: nums) {
            largest = max((long)i,largest);
        }
        
        long second = (long)INT_MIN - 1;
        for(auto i: nums) {
            if(i == largest) continue;
            second = max(second , (long)i);
        }
        
        long third = (long)INT_MIN - 1;
        for(auto i: nums) {
            if(i == largest || i == second) continue;
            third = max(third , (long)i);
        }
        
        return (int)((second == (long)INT_MIN - 1 || third == (long)INT_MIN - 1)?largest:third);
    }
};
