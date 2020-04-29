/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            queue<TreeNode*> t;
            vector<int> a;
            while(!q.empty())
            {
                TreeNode* temp = q.front();
                a.push_back(temp->val);
                q.pop();
                if(temp->left != NULL)
                    t.push(temp->left);
                if(temp->right != NULL)
                    t.push(temp->right);
            }
            ans.insert(ans.begin(),1,a);
            q = t;
        }
        
        return ans;
    }
};
