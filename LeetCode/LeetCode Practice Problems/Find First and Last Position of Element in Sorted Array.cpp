int find1(vector<int>& nums,int target)
{
    int index = -1;
    int left = 0 , right = nums.size() - 1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(nums[mid] == target)
            index = mid;
        
        if(nums[mid] >= target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return index;
}
int find2(vector<int>& nums,int target)
{
    int index = -1;
    int left = 0 , right = nums.size()-1;
    while(left<=right)
    {
        int mid = (left + right) / 2;
        if(nums[mid] == target)
            index = mid;
        
        if(nums[mid] <= target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return index;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {find1(nums,target) , find2(nums,target)};
    }
};
