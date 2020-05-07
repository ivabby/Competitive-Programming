#define mp(x,y) make_pair(x,y)
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode* , int>> q;
        q.push(mp(root , -10));
        
        while(!q.empty())
        {
            queue<pair<TreeNode* , int>> t;
            bool found = false;
            int v1 = -1 , v2 = -1;
            while(!q.empty())
            {
                pair<TreeNode* , int> p = q.front();
                q.pop();
                if(p.first->val == x)
                    v1 = p.second;
                else if(p.first->val == y)
                    v2 = p.second;
                
                if(p.first->left != NULL)
                    t.push(mp(p.first->left , p.first->val));
                if(p.first->right != NULL)
                    t.push(mp(p.first->right , p.first->val));
            }
            
            if(v1 != v2 && v1 != -1 && v2 != -1)
                return true;
            q = t;
        }
        
        
        return false;
    }
};
