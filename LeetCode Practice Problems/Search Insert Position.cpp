class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        return lower_bound(v.begin() , v.end() , target) - v.begin();
    }
};
