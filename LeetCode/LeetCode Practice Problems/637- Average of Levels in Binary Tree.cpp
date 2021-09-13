class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        
        if(root != NULL) {
            q.push(root);
        }
        
        vector<double> ans;
        while(!q.empty()) {
            int sz = q.size();
            double s = 0;
            for(int i=0;i<sz;i++) {
                TreeNode* t = q.front();
                q.pop();
                
                s += t->val;
                if(t->left != NULL) q.push(t->left);
                if(t->right != NULL) q.push(t->right);
            }
            
            ans.push_back((double)s/(double)sz);
        }
        
        return ans;
    }
};
