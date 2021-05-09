bool sorts(vector<int> a,vector<int> b) {
        return a[1] > b[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;
        
        sort(boxTypes.begin() , boxTypes.end() , sorts);
        
        for(auto i : boxTypes) {
            int mn = min(truckSize , i[0]);
            
            ans += mn * i[1];
            
            truckSize -= mn;
            if(truckSize == 0)
                break;
        }
            
            
        return ans;
    }
};
