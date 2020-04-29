class Solution {
public:
    vector<vector<int>> ans;
    void find(TreeNode* root,int sum,vector<int> a){
        if(root->left == NULL && root->right == NULL){
            if(root->val - sum == 0)
            {
                a.push_back(root->val);
                ans.push_back(a);
                a.pop_back();
            }
            
            return;
        }
        
        if(root->left!=NULL)
        {
            a.push_back(root->val);
            find(root->left , sum - root->val , a);
            a.pop_back();
        }
        
        if(root->right != NULL)
        {
            a.push_back(root->val);
            find(root->right , sum - root->val , a);
            a.pop_back();
        }
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return ans;
        find(root , sum , {});
        return ans;
    }
};
