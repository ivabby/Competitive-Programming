class Solution {
public:
    TreeNode* check(vector<int>& nums,int l,int r)
    {
        if(l>r)
            return NULL;
        
        int index = l;
        int maxi = nums[l];
        for(int i=l;i<=r;i++)
            if(maxi < nums[i])
            {
                maxi = nums[i];
                index = i;
            }
        
        TreeNode* t = new TreeNode(maxi);
        t->left = check(nums,l,index-1);
        t->right = check(nums,index+1,r);
        
        return t;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0)
            return NULL;
        return check(nums,0,nums.size()-1);
    }
};
