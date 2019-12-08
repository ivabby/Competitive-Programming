class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long s = 0;
        // for(auto i : nums) s+=i;
        
        int i = 1 , j = 100000000;
        while(i<=j)
        {
            int mid  = (i+j)/2;
            int value = 0;
            for(auto i : nums) value+=ceil((double)i/(double)mid);
            if(value <= threshold)
                j = mid - 1;
            else
                i = mid + 1;
        }
        cout<<i<<" "<<j;
        return i;
    }
};
