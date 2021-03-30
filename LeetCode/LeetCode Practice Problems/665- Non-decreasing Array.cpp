class Solution {
public:
    // Time: O(n) , Space : O(n)
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1) {
            return true;
        }
        
        vector<bool> left(n , false);
        vector<bool> right(n , false);
        
        
        
        left[0] = true;
        for(int i=1;i<n;i++) {
            left[i] = left[i-1] && (nums[i-1] <= nums[i]);
        }
        
        right[n-1] = true;
        for(int i=n-2;i>=0;i--) {
            right[i] = right[i+1] && (nums[i] <= nums[i+1]);
        }
        
        for(int i=0;i<n;i++) {
            if(i == 0) {
                if(right[i+1]) return true;
            }
            else if(i == n-1) {
                if(left[i-1]) return true;
            }
            else {
                if(left[i-1] && right[i+1] && nums[i-1] <= nums[i+1]) return true;
            }
        }
        
        return false;
        
    }
    
    //  Time: O(n) , Space: O(1) , Modifying Input
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        
        for(int i=0;i<n-1;i++) {
            if(nums[i] > nums[i+1]) {
                cnt++;
                if(cnt > 1) return false;
                
                if(i>0 && nums[i-1] > nums[i+1]) 
                    nums[i+1] = nums[i];
                else
                    nums[i] = nums[i+1];
            }
        }
        return true;
    }
    
    // Time: O(n) , Space: O(1) , Without Modifying Input
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        int p = -1;
        
        for(int i=0;i<n-1;i++) {
            if(nums[i] > nums[i+1]) {
                if(p != -1) return false;
                p = i;
            }
        }
        
        return p==-1 || p==0 || p==n-2 || nums[p-1] <= nums[p+1] || nums[p] <= nums[p+2];
    }
    
};
